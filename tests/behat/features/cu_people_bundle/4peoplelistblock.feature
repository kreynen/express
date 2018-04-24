@people
Feature: People List Block
In order to place lists of people on different types of node
As an authenticated user
I should be able to create a People List block

@api
Scenario Outline: An authenticated user can access the form for adding a people list block
   Given I am logged in as a user with the <role> role
   When I go to "block/add/people-list-block"
   Then I should see <message>

    Examples:
    | role           | message         |
    | edit_my_content | "Access denied" |
    | content_editor | "Create People List Block block" |
    | site_owner     | "Create People List Block block" |
    | administrator  | "Create People List Block block" |
    | developer      | "Create People List Block block" |

@api 
Scenario: An anonymous user cannot access the form for adding a people list block
 When I am on "block/add/people-list-block"
 Then I should see "Access denied"
  
 @api 
Scenario Outline: A simple People List Block offers several display views
  Given I am logged in as a user with the "content_editor" role
  And am on "block/add/people-list-block"
  When I select <condition> from "edit-field-people-block-thumbnail-und"

  Examples:
    | condition |
    | "teaser" |
    | "grid" |
    | "sidebar" |
    | "title" |
   
@api @javascript
 Scenario: The People List Block has been populated with Filters
    Given I am logged in as a user with the "site_owner" role
    And am on "block/add/people-list-block"
   And I click the ".group-people-list-filter.field-group-fieldset a.fieldset-title" element
 And I should see "Geophysics"
 And I should see "Technology"
  Then I should see "Faculty"
  Then I should see "Staff"
 And I should see "Honeywell"
 And I should see "Marietta"
 And I should see "Design"
 And I should see "Law"
 
@api 
Scenario: A simple People List Block can be created
 Given I am logged in as a user with the "content_editor" role
 And am on "block/add/people-list-block"
 And fill in "edit-label" with "Simple People Block Label"
 And fill in "edit-title" with "Simple People Block Title"
 When I press "Save"
Then I should see "Simple People Block Title has been created."
And I should see "Deshawn StaffGeoMariDes"
And I should see "Alejandro FacGeoHoneyLaw"
And I shold see "Kendall StaffTechHoneyLaw"
And I should see "Abdullah FacTechMariDes"
And I am on "block/my-people/view"
  
 @api 
 Scenario: The People List Block can filter out persons
    Given I am logged in as a user with the "site_owner" role
    And am on "block/add/people-list-block"
   # And I click the ".group-people-list-filter.field-group-fieldset a.fieldset-title" element
  # And I check "edit-field-people-filter-1-und-8"
  And I check "Honeywell"
   And I press "Save" 
   Then I should see "Alejandro FacGeoHoneyLaw"
   And I should see "Kendall StaffTechHoneyLaw"

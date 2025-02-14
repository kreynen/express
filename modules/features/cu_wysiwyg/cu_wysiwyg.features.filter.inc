<?php
/**
 * @file
 * cu_wysiwyg.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function cu_wysiwyg_filter_default_formats() {
  $formats = array();

  // Exported format: Full HTML.
  $formats['full_html'] = array(
    'format' => 'full_html',
    'name' => 'Full HTML',
    'cache' => 1,
    'status' => 1,
    'weight' => 50,
    'filters' => array(),
  );

  // Exported format: WYSIWYG.
  $formats['wysiwyg'] = array(
    'format' => 'wysiwyg',
    'name' => 'WYSIWYG',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'filter_autop' => array(
        'weight' => -50,
        'status' => 1,
        'settings' => array(),
      ),
      'wysiwyg' => array(
        'weight' => -49,
        'status' => 1,
        'settings' => array(
          'valid_elements' => 'a[href|name|class|target<_blank|title],
div[class|align<center?left?right|style],
p[class|align<center?left?right|style],
br,span,em,i[class],strong,b,cite,code,blockquote,ul[class],ol[class|type],li,dl,dt,dd,
h2[align<center?left?right|style],
h3[align<center?left?right|style],
h4[align<center?left?right|style],
h5[align<center?left?right|style],
h6[align<center?left?right|style],
table[border|cellpadding|cellspacing|class|width|height|align|border|bgcolor|style],
th[class|colspan|valign|bgcolor|width|height|style|scope|id],
thead[class|colspan|valign|bgcolor|width|height|style],
tr[class|bgcolor|width|height|style],
td[class|rowspan|colspan|valign|bgcolor|width|height|align|style|nowrap|headers],
img[src|title|alt|style|class],
hr,
small,
sub,
sup,',
          'allow_comments' => 1,
          'nofollow_policy' => 'disabled',
          'nofollow_domains' => array(),
          'style_color' => array(
            'color' => 0,
            'background' => 0,
            'background-color' => 0,
            'background-image' => 0,
            'background-repeat' => 0,
            'background-attachment' => 0,
            'background-position' => 0,
          ),
          'style_font' => array(
            'font' => 0,
            'font-family' => 0,
            'font-size' => 0,
            'font-size-adjust' => 0,
            'font-stretch' => 0,
            'font-style' => 0,
            'font-variant' => 0,
            'font-weight' => 0,
          ),
          'style_text' => array(
            'text-align' => 'text-align',
            'white-space' => 'white-space',
            'text-decoration' => 0,
            'text-indent' => 0,
            'text-transform' => 0,
            'letter-spacing' => 0,
            'word-spacing' => 0,
            'direction' => 0,
            'unicode-bidi' => 0,
          ),
          'style_box' => array(
            'margin' => 'margin',
            'margin-top' => 'margin-top',
            'margin-right' => 'margin-right',
            'margin-bottom' => 'margin-bottom',
            'margin-left' => 'margin-left',
            'padding' => 0,
            'padding-top' => 0,
            'padding-right' => 0,
            'padding-bottom' => 0,
            'padding-left' => 0,
          ),
          'style_border-1' => array(
            'border' => 0,
            'border-top' => 0,
            'border-right' => 0,
            'border-bottom' => 0,
            'border-left' => 0,
            'border-width' => 0,
            'border-top-width' => 0,
            'border-right-width' => 0,
            'border-bottom-width' => 0,
            'border-left-width' => 0,
          ),
          'style_border-2' => array(
            'border-color' => 0,
            'border-top-color' => 0,
            'border-right-color' => 0,
            'border-bottom-color' => 0,
            'border-left-color' => 0,
            'border-style' => 0,
            'border-top-style' => 0,
            'border-right-style' => 0,
            'border-bottom-style' => 0,
            'border-left-style' => 0,
          ),
          'style_dimension' => array(
            'height' => 0,
            'line-height' => 0,
            'max-height' => 0,
            'max-width' => 0,
            'min-height' => 0,
            'min-width' => 0,
            'width' => 0,
          ),
          'style_positioning' => array(
            'bottom' => 0,
            'clip' => 0,
            'left' => 0,
            'overflow' => 0,
            'right' => 0,
            'top' => 0,
            'vertical-align' => 0,
            'z-index' => 0,
          ),
          'style_layout' => array(
            'float' => 'float',
            'clear' => 0,
            'display' => 0,
            'position' => 0,
            'visibility' => 0,
          ),
          'style_list' => array(
            'list-style' => 0,
            'list-style-image' => 0,
            'list-style-position' => 0,
            'list-style-type' => 0,
          ),
          'style_table' => array(
            'border-collapse' => 0,
            'border-spacing' => 0,
            'caption-side' => 0,
            'empty-cells' => 0,
            'table-layout' => 0,
          ),
          'style_user' => array(
            'cursor' => 0,
            'outline' => 0,
            'outline-width' => 0,
            'outline-style' => 0,
            'outline-color' => 0,
            'zoom' => 0,
          ),
          'rule_valid_classes' => array(
            0 => 'button-*',
            2 => 'button',
            4 => 'image-grid-*',
            6 => 'image-*',
            8 => 'give-button',
            10 => 'give-button-*',
            12 => 'file-*',
            14 => 'box-*',
            16 => 'icon-*',
            18 => 'btn',
            20 => 'btn-*',
            22 => 'noborder',
            24 => 'table-*',
            26 => 'lead',
            28 => 'list-style-*',
            30 => 'supersize',
            32 => 'hero',
            34 => 'colorbox',
          ),
          'rule_valid_ids' => array(),
          'rule_style_urls' => array(),
        ),
      ),
      'video_filter' => array(
        'weight' => -48,
        'status' => 1,
        'settings' => array(
          'video_filter_width' => 400,
          'video_filter_height' => 400,
          'video_filter_autoplay' => 0,
          'video_filter_related' => 0,
          'video_filter_html5' => 1,
        ),
      ),
      'shortcode' => array(
        'weight' => -47,
        'status' => 1,
        'settings' => array(
          'give' => 1,
          'anchors' => 1,
          'backtotop' => 0,
          'blockquote' => 1,
          'box' => 1,
          'button' => 1,
          'buttongroup' => 1,
          'callout' => 1,
          'clear' => 1,
          'column' => 1,
          'columnlist' => 1,
          'expand' => 1,
          'googlecalendar' => 1,
          'icon' => 1,
          'imagecaption' => 1,
          'map' => 1,
          'masonry-images' => 1,
          'print' => 1,
          'sidebar' => 0,
          'tooltip' => 0,
          'tweet' => 0,
        ),
      ),
      'ckeditor_link_filter' => array(
        'weight' => -45,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_url' => array(
        'weight' => -44,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'filter_htmlcorrector' => array(
        'weight' => -43,
        'status' => 1,
        'settings' => array(),
      ),
      'pathologic' => array(
        'weight' => 50,
        'status' => 1,
        'settings' => array(
          'local_paths' => _create_cu_pathologic_paths(),
          'protocol_style' => 'proto-rel',
        ),
      ),
    ),
  );

  return $formats;
}

function _create_cu_pathologic_paths() {
  $cu_sid = variable_get('cu_sid', FALSE);
  $cu_path = variable_get('cu_path', FALSE);

  if ($cu_sid || $cu_path) {

    $paths = array();

    // Build hash paths
    if ($cu_sid) {
        $paths[] = "/$cu_sid";
        $paths[] = "http://www.colorado.edu/$cu_sid";
        $paths[] = "https://www.colorado.edu/$cu_sid";
    }
    // Build real paths
    if ($cu_path) {
        $paths[] = "/$cu_path";
        $paths[] = "http://www.colorado.edu/$cu_path";
        $paths[] = "https://www.colorado.edu/$cu_path";
    }
    // Build pathologic settings on one path per line
    return $all_paths = join("\n", $paths);
  }
}

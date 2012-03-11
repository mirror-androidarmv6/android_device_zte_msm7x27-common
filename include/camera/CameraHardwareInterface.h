


<!DOCTYPE html>
<html>
  <head prefix="og: http://ogp.me/ns# fb: http://ogp.me/ns/fb# githubog: http://ogp.me/ns/fb/githubog#">
    <meta charset='utf-8'>
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
        <title>android_frameworks_base/include/camera/CameraHardwareInterface.h at gingerbread · CyanogenMod/android_frameworks_base · GitHub</title>
    <link rel="search" type="application/opensearchdescription+xml" href="/opensearch.xml" title="GitHub" />
    <link rel="fluid-icon" href="https://github.com/fluidicon.png" title="GitHub" />
    <link rel="shortcut icon" href="/favicon.ico" type="image/x-icon" />

    
    

    <meta content="authenticity_token" name="csrf-param" />
<meta content="cnLUMtZ7BxXTe6gxp6GY7psdEwsccPrEmr7W/+imKDE=" name="csrf-token" />

    <link href="https://a248.e.akamai.net/assets.github.com/stylesheets/bundles/github-c1231dbd75402200b63fec9cd06ba0ee4fce0677.css" media="screen" rel="stylesheet" type="text/css" />
    <link href="https://a248.e.akamai.net/assets.github.com/stylesheets/bundles/github2-479c7e81b5a5a7e0684fbf37f7bf89916417f645.css" media="screen" rel="stylesheet" type="text/css" />
    

    <script src="https://a248.e.akamai.net/assets.github.com/javascripts/bundles/jquery-5b140862bd914d3619171dece9be92269c2b1fe1.js" type="text/javascript"></script>
    <script src="https://a248.e.akamai.net/assets.github.com/javascripts/bundles/github-b4102a9465f9c4befb1870f7b174c771b2c35729.js" type="text/javascript"></script>
    

      <link rel='permalink' href='/CyanogenMod/android_frameworks_base/blob/4c8dc6e46d44b2bbec7694dc35f403276c0cedb1/include/camera/CameraHardwareInterface.h'>
    <meta property="og:title" content="android_frameworks_base"/>
    <meta property="og:type" content="githubog:gitrepository"/>
    <meta property="og:url" content="https://github.com/CyanogenMod/android_frameworks_base"/>
    <meta property="og:image" content="https://a248.e.akamai.net/assets.github.com/images/gravatars/gravatar-140.png?1329275856"/>
    <meta property="og:site_name" content="GitHub"/>
    <meta property="og:description" content="android_frameworks_base - Android base frameworks (cyanogenmod)"/>

    <meta name="description" content="android_frameworks_base - Android base frameworks (cyanogenmod)" />
  <link href="https://github.com/CyanogenMod/android_frameworks_base/commits/gingerbread.atom" rel="alternate" title="Recent Commits to android_frameworks_base:gingerbread" type="application/atom+xml" />

  </head>


  <body class="logged_out page-blob  vis-public fork env-production " data-blob-contribs-enabled="yes">
    
    
    

      <div id="header" class="true clearfix">
        <div class="container clearfix">
          <a class="site-logo" href="https://github.com">
            <!--[if IE]>
            <img alt="GitHub" class="github-logo" src="https://a248.e.akamai.net/assets.github.com/images/modules/header/logov7.png?1323882717" />
            <img alt="GitHub" class="github-logo-hover" src="https://a248.e.akamai.net/assets.github.com/images/modules/header/logov7-hover.png?1324325359" />
            <![endif]-->
            <img alt="GitHub" class="github-logo-4x" height="30" src="https://a248.e.akamai.net/assets.github.com/images/modules/header/logov7@4x.png?1323882717" />
            <img alt="GitHub" class="github-logo-4x-hover" height="30" src="https://a248.e.akamai.net/assets.github.com/images/modules/header/logov7@4x-hover.png?1324325359" />
          </a>

                  <!--
      make sure to use fully qualified URLs here since this nav
      is used on error pages on other domains
    -->
    <ul class="top-nav logged_out">
        <li class="pricing"><a href="https://github.com/plans">Signup and Pricing</a></li>
        <li class="explore"><a href="https://github.com/explore">Explore GitHub</a></li>
      <li class="features"><a href="https://github.com/features">Features</a></li>
        <li class="blog"><a href="https://github.com/blog">Blog</a></li>
      <li class="login"><a href="https://github.com/login?return_to=%2FCyanogenMod%2Fandroid_frameworks_base%2Fblob%2Fgingerbread%2Finclude%2Fcamera%2FCameraHardwareInterface.h">Login</a></li>
    </ul>



          
        </div>
      </div>

      

            <div class="site" itemscope itemtype="http://schema.org/WebPage">
      <div class="container">
        <div class="pagehead repohead instapaper_ignore readability-menu">
        <div class="title-actions-bar">
          <h1 itemscope itemtype="http://data-vocabulary.org/Breadcrumb">
<a href="/CyanogenMod" itemprop="url">            <span itemprop="title">CyanogenMod</span>
            </a> /
            <strong><a href="/CyanogenMod/android_frameworks_base" class="js-current-repository">android_frameworks_base</a></strong>
              <span class="fork-flag">
                <span class="text">forked from <a href="/KellyMahan/android_frameworks_base">KellyMahan/android_frameworks_base</a></span>
              </span>
          </h1>
          



              <ul class="pagehead-actions">


          <li><a href="/login?return_to=%2FCyanogenMod%2Fandroid_frameworks_base" class="minibutton btn-watch watch-button entice tooltipped leftwards" rel="nofollow" title="You must be logged in to use this feature"><span><span class="icon"></span>Watch</span></a></li>
          <li><a href="/login?return_to=%2FCyanogenMod%2Fandroid_frameworks_base" class="minibutton btn-fork fork-button entice tooltipped leftwards" rel="nofollow" title="You must be logged in to use this feature"><span><span class="icon"></span>Fork</span></a></li>


      <li class="repostats">
        <ul class="repo-stats">
          <li class="watchers ">
            <a href="/CyanogenMod/android_frameworks_base/watchers" title="Watchers" class="tooltipped downwards">
              546
            </a>
          </li>
          <li class="forks">
            <a href="/CyanogenMod/android_frameworks_base/network" title="Forks" class="tooltipped downwards">
              477
            </a>
          </li>
        </ul>
      </li>
    </ul>

        </div>

          

  <ul class="tabs">
    <li><a href="/CyanogenMod/android_frameworks_base/tree/gingerbread" class="selected" highlight="repo_sourcerepo_downloadsrepo_commitsrepo_tagsrepo_branches">Code</a></li>
    <li><a href="/CyanogenMod/android_frameworks_base/network" highlight="repo_networkrepo_fork_queue">Network</a>
    <li><a href="/CyanogenMod/android_frameworks_base/pulls" highlight="repo_pulls">Pull Requests <span class='counter'>16</span></a></li>



    <li><a href="/CyanogenMod/android_frameworks_base/graphs" highlight="repo_graphsrepo_contributors">Stats &amp; Graphs</a></li>

  </ul>

  
<div class="frame frame-center tree-finder" style="display:none"
      data-tree-list-url="/CyanogenMod/android_frameworks_base/tree-list/4c8dc6e46d44b2bbec7694dc35f403276c0cedb1"
      data-blob-url-prefix="/CyanogenMod/android_frameworks_base/blob/4c8dc6e46d44b2bbec7694dc35f403276c0cedb1"
    >

  <div class="breadcrumb">
    <span class="bold"><a href="/CyanogenMod/android_frameworks_base">android_frameworks_base</a></span> /
    <input class="tree-finder-input js-navigation-enable" type="text" name="query" autocomplete="off" spellcheck="false">
  </div>

    <div class="octotip">
      <p>
        <a href="/CyanogenMod/android_frameworks_base/dismiss-tree-finder-help" class="dismiss js-dismiss-tree-list-help" title="Hide this notice forever" rel="nofollow">Dismiss</a>
        <span class="bold">Octotip:</span> You've activated the <em>file finder</em>
        by pressing <span class="kbd">t</span> Start typing to filter the
        file list. Use <span class="kbd badmono">↑</span> and
        <span class="kbd badmono">↓</span> to navigate,
        <span class="kbd">enter</span> to view files.
      </p>
    </div>

  <table class="tree-browser" cellpadding="0" cellspacing="0">
    <tr class="js-header"><th>&nbsp;</th><th>name</th></tr>
    <tr class="js-no-results no-results" style="display: none">
      <th colspan="2">No matching files</th>
    </tr>
    <tbody class="js-results-list js-navigation-container">
    </tbody>
  </table>
</div>

<div id="jump-to-line" style="display:none">
  <h2>Jump to Line</h2>
  <form>
    <input class="textfield" type="text">
    <div class="full-button">
      <button type="submit" class="classy">
        <span>Go</span>
      </button>
    </div>
  </form>
</div>


<div class="subnav-bar">

  <ul class="actions subnav">
    <li><a href="/CyanogenMod/android_frameworks_base/tags" class="" highlight="repo_tags">Tags <span class="counter">5</span></a></li>
    <li><a href="/CyanogenMod/android_frameworks_base/downloads" class="blank downloads-blank" highlight="repo_downloads">Downloads <span class="counter">0</span></a></li>
    
  </ul>

  <ul class="scope">
    <li class="switcher">

      <div class="context-menu-container js-menu-container">
        <a href="#"
           class="minibutton bigger switcher js-menu-target js-commitish-button btn-branch repo-tree"
           data-master-branch="ics"
           data-ref="gingerbread">
          <span><span class="icon"></span><i>branch:</i> gingerbread</span>
        </a>

        <div class="context-pane commitish-context js-menu-content">
          <a href="javascript:;" class="close js-menu-close"></a>
          <div class="context-title">Switch Branches/Tags</div>
          <div class="context-body pane-selector commitish-selector js-filterable-commitishes">
            <div class="filterbar">
              <div class="placeholder-field js-placeholder-field">
                <label class="placeholder" for="context-commitish-filter-field" data-placeholder-mode="sticky">Filter branches/tags</label>
                <input type="text" id="context-commitish-filter-field" class="commitish-filter" />
              </div>

              <ul class="tabs">
                <li><a href="#" data-filter="branches" class="selected">Branches</a></li>
                <li><a href="#" data-filter="tags">Tags</a></li>
              </ul>
            </div>

              <div class="commitish-item branch-commitish selector-item">
                <h4>
                    <a href="/CyanogenMod/android_frameworks_base/blob/donut/include/camera/CameraHardwareInterface.h" data-name="donut" rel="nofollow">donut</a>
                </h4>
              </div>
              <div class="commitish-item branch-commitish selector-item">
                <h4>
                    <a href="/CyanogenMod/android_frameworks_base/blob/eclair/include/camera/CameraHardwareInterface.h" data-name="eclair" rel="nofollow">eclair</a>
                </h4>
              </div>
              <div class="commitish-item branch-commitish selector-item">
                <h4>
                    <a href="/CyanogenMod/android_frameworks_base/blob/froyo/include/camera/CameraHardwareInterface.h" data-name="froyo" rel="nofollow">froyo</a>
                </h4>
              </div>
              <div class="commitish-item branch-commitish selector-item">
                <h4>
                    <a href="/CyanogenMod/android_frameworks_base/blob/froyo-stable/include/camera/CameraHardwareInterface.h" data-name="froyo-stable" rel="nofollow">froyo-stable</a>
                </h4>
              </div>
              <div class="commitish-item branch-commitish selector-item">
                <h4>
                    <a href="/CyanogenMod/android_frameworks_base/blob/gb-release-7.2/include/camera/CameraHardwareInterface.h" data-name="gb-release-7.2" rel="nofollow">gb-release-7.2</a>
                </h4>
              </div>
              <div class="commitish-item branch-commitish selector-item">
                <h4>
                    <a href="/CyanogenMod/android_frameworks_base/blob/gingerbread/include/camera/CameraHardwareInterface.h" data-name="gingerbread" rel="nofollow">gingerbread</a>
                </h4>
              </div>
              <div class="commitish-item branch-commitish selector-item">
                <h4>
                    <a href="/CyanogenMod/android_frameworks_base/blob/gingerbread-release/include/camera/CameraHardwareInterface.h" data-name="gingerbread-release" rel="nofollow">gingerbread-release</a>
                </h4>
              </div>
              <div class="commitish-item branch-commitish selector-item">
                <h4>
                    <a href="/CyanogenMod/android_frameworks_base/blob/ics/include/camera/CameraHardwareInterface.h" data-name="ics" rel="nofollow">ics</a>
                </h4>
              </div>
              <div class="commitish-item branch-commitish selector-item">
                <h4>
                    <a href="/CyanogenMod/android_frameworks_base/blob/missing-master-patches/include/camera/CameraHardwareInterface.h" data-name="missing-master-patches" rel="nofollow">missing-master-patches</a>
                </h4>
              </div>
              <div class="commitish-item branch-commitish selector-item">
                <h4>
                    <a href="/CyanogenMod/android_frameworks_base/blob/themes-exp/include/camera/CameraHardwareInterface.h" data-name="themes-exp" rel="nofollow">themes-exp</a>
                </h4>
              </div>

              <div class="commitish-item tag-commitish selector-item">
                <h4>
                    <a href="/CyanogenMod/android_frameworks_base/blob/cm-7.1.0/include/camera/CameraHardwareInterface.h" data-name="cm-7.1.0" rel="nofollow">cm-7.1.0</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item">
                <h4>
                    <a href="/CyanogenMod/android_frameworks_base/blob/cm-7.0.3/include/camera/CameraHardwareInterface.h" data-name="cm-7.0.3" rel="nofollow">cm-7.0.3</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item">
                <h4>
                    <a href="/CyanogenMod/android_frameworks_base/blob/cm-7.0.2.1/include/camera/CameraHardwareInterface.h" data-name="cm-7.0.2.1" rel="nofollow">cm-7.0.2.1</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item">
                <h4>
                    <a href="/CyanogenMod/android_frameworks_base/blob/cm-7.0.1/include/camera/CameraHardwareInterface.h" data-name="cm-7.0.1" rel="nofollow">cm-7.0.1</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item">
                <h4>
                    <a href="/CyanogenMod/android_frameworks_base/blob/cm-7.0.0/include/camera/CameraHardwareInterface.h" data-name="cm-7.0.0" rel="nofollow">cm-7.0.0</a>
                </h4>
              </div>

            <div class="no-results" style="display:none">Nothing to show</div>
          </div>
        </div><!-- /.commitish-context-context -->
      </div>

    </li>
  </ul>

  <ul class="subnav with-scope">

    <li><a href="/CyanogenMod/android_frameworks_base/tree/gingerbread" class="selected" highlight="repo_source">Files</a></li>
    <li><a href="/CyanogenMod/android_frameworks_base/commits/gingerbread" highlight="repo_commits">Commits</a></li>
    <li><a href="/CyanogenMod/android_frameworks_base/branches" class="" highlight="repo_branches" rel="nofollow">Branches <span class="counter">10</span></a></li>
  </ul>

</div>

  
  
  


          

        </div><!-- /.repohead -->

        





<!-- block_view_fragment_key: views6/v8/blob:v19:d4447cc7be13200eba5c62ae4c78035d -->
  <div id="slider">

    <div class="breadcrumb" data-path="include/camera/CameraHardwareInterface.h/">
      <b itemscope="" itemtype="http://data-vocabulary.org/Breadcrumb"><a href="/CyanogenMod/android_frameworks_base/tree/4c8dc6e46d44b2bbec7694dc35f403276c0cedb1" class="js-rewrite-sha" itemprop="url"><span itemprop="title">android_frameworks_base</span></a></b> / <span itemscope="" itemtype="http://data-vocabulary.org/Breadcrumb"><a href="/CyanogenMod/android_frameworks_base/tree/4c8dc6e46d44b2bbec7694dc35f403276c0cedb1/include" class="js-rewrite-sha" itemscope="url"><span itemprop="title">include</span></a></span> / <span itemscope="" itemtype="http://data-vocabulary.org/Breadcrumb"><a href="/CyanogenMod/android_frameworks_base/tree/4c8dc6e46d44b2bbec7694dc35f403276c0cedb1/include/camera" class="js-rewrite-sha" itemscope="url"><span itemprop="title">camera</span></a></span> / <strong class="final-path">CameraHardwareInterface.h</strong> <span class="js-clippy clippy-button " data-clipboard-text="include/camera/CameraHardwareInterface.h" data-copied-hint="copied!" data-copy-hint="copy to clipboard"></span>
    </div>


      <div class="commit file-history-tease" data-path="include/camera/CameraHardwareInterface.h/">
        <img class="main-avatar" height="24" src="https://secure.gravatar.com/avatar/6f7d3622cbb3dcc0c9a59c4bb0a71101?s=140&amp;d=https://a248.e.akamai.net/assets.github.com%2Fimages%2Fgravatars%2Fgravatar-140.png" width="24" />
        <span class="author"><a href="/Kali-">Kali-</a></span>
        <time class="js-relative-date" datetime="2012-01-05T05:58:12-08:00" title="2012-01-05 05:58:12">January 05, 2012</time>
        <div class="commit-title">
            <a href="/CyanogenMod/android_frameworks_base/commit/27684178f28b140fada07783e25623fb30616725" class="message">Camera: Support CAF Gingerbread Release</a>
        </div>

        <div class="participation">
          <p class="quickstat"><a href="#blob_contributors_box" rel="facebox"><strong>3</strong> contributors</a></p>
              <a class="avatar tooltipped downwards" title="rmcc" href="/CyanogenMod/android_frameworks_base/commits/gingerbread/include/camera/CameraHardwareInterface.h?author=rmcc"><img height="20" src="https://secure.gravatar.com/avatar/30f5cd3b74f52af325d5d596cb5b1381?s=140&amp;d=https://a248.e.akamai.net/assets.github.com%2Fimages%2Fgravatars%2Fgravatar-140.png" width="20" /></a>
    <a class="avatar tooltipped downwards" title="Kali-" href="/CyanogenMod/android_frameworks_base/commits/gingerbread/include/camera/CameraHardwareInterface.h?author=Kali-"><img height="20" src="https://secure.gravatar.com/avatar/6f7d3622cbb3dcc0c9a59c4bb0a71101?s=140&amp;d=https://a248.e.akamai.net/assets.github.com%2Fimages%2Fgravatars%2Fgravatar-140.png" width="20" /></a>
    <a class="avatar tooltipped downwards" title="cyanogen" href="/CyanogenMod/android_frameworks_base/commits/gingerbread/include/camera/CameraHardwareInterface.h?author=cyanogen"><img height="20" src="https://secure.gravatar.com/avatar/345ef36929e4ecae65ed8fdee4ec92d0?s=140&amp;d=https://a248.e.akamai.net/assets.github.com%2Fimages%2Fgravatars%2Fgravatar-140.png" width="20" /></a>


        </div>
        <div id="blob_contributors_box" style="display:none">
          <h2>Users on GitHub who have contributed to this file</h2>
          <ul class="facebox-user-list">
            <li>
              <img height="24" src="https://secure.gravatar.com/avatar/30f5cd3b74f52af325d5d596cb5b1381?s=140&amp;d=https://a248.e.akamai.net/assets.github.com%2Fimages%2Fgravatars%2Fgravatar-140.png" width="24" />
              <a href="/rmcc">rmcc</a>
            </li>
            <li>
              <img height="24" src="https://secure.gravatar.com/avatar/6f7d3622cbb3dcc0c9a59c4bb0a71101?s=140&amp;d=https://a248.e.akamai.net/assets.github.com%2Fimages%2Fgravatars%2Fgravatar-140.png" width="24" />
              <a href="/Kali-">Kali-</a>
            </li>
            <li>
              <img height="24" src="https://secure.gravatar.com/avatar/345ef36929e4ecae65ed8fdee4ec92d0?s=140&amp;d=https://a248.e.akamai.net/assets.github.com%2Fimages%2Fgravatars%2Fgravatar-140.png" width="24" />
              <a href="/cyanogen">cyanogen</a>
            </li>
          </ul>
        </div>
      </div>

    <div class="frames">
      <div class="frame frame-center" data-path="include/camera/CameraHardwareInterface.h/" data-permalink-url="/CyanogenMod/android_frameworks_base/blob/4c8dc6e46d44b2bbec7694dc35f403276c0cedb1/include/camera/CameraHardwareInterface.h" data-title="android_frameworks_base/include/camera/CameraHardwareInterface.h at gingerbread · CyanogenMod/android_frameworks_base · GitHub" data-type="blob">

        <div id="files" class="bubble">
          <div class="file">
            <div class="meta">
              <div class="info">
                <span class="icon"><img alt="Txt" height="16" src="https://a248.e.akamai.net/assets.github.com/images/icons/txt.png?1310104853" width="16" /></span>
                <span class="mode" title="File Mode">100644</span>
                  <span>256 lines (218 sloc)</span>
                <span>8.923 kb</span>
              </div>
              <ul class="button-group actions">
                  <li>
                    <a class="grouped-button file-edit-link minibutton bigger lighter js-rewrite-sha" href="/CyanogenMod/android_frameworks_base/edit/4c8dc6e46d44b2bbec7694dc35f403276c0cedb1/include/camera/CameraHardwareInterface.h" data-method="post" rel="nofollow"><span>Edit this file</span></a>
                  </li>

                <li>
                  <a href="/CyanogenMod/android_frameworks_base/raw/gingerbread/include/camera/CameraHardwareInterface.h" class="minibutton btn-raw grouped-button bigger lighter" id="raw-url"><span><span class="icon"></span>Raw</span></a>
                </li>
                  <li>
                    <a href="/CyanogenMod/android_frameworks_base/blame/gingerbread/include/camera/CameraHardwareInterface.h" class="minibutton btn-blame grouped-button bigger lighter"><span><span class="icon"></span>Blame</span></a>
                  </li>
                <li>
                  <a href="/CyanogenMod/android_frameworks_base/commits/gingerbread/include/camera/CameraHardwareInterface.h" class="minibutton btn-history grouped-button bigger lighter" rel="nofollow"><span><span class="icon"></span>History</span></a>
                </li>
              </ul>
            </div>
              <div class="data type-c">
      <table cellpadding="0" cellspacing="0" class="lines">
        <tr>
          <td>
            <pre class="line_numbers"><span id="L1" rel="#L1">1</span>
<span id="L2" rel="#L2">2</span>
<span id="L3" rel="#L3">3</span>
<span id="L4" rel="#L4">4</span>
<span id="L5" rel="#L5">5</span>
<span id="L6" rel="#L6">6</span>
<span id="L7" rel="#L7">7</span>
<span id="L8" rel="#L8">8</span>
<span id="L9" rel="#L9">9</span>
<span id="L10" rel="#L10">10</span>
<span id="L11" rel="#L11">11</span>
<span id="L12" rel="#L12">12</span>
<span id="L13" rel="#L13">13</span>
<span id="L14" rel="#L14">14</span>
<span id="L15" rel="#L15">15</span>
<span id="L16" rel="#L16">16</span>
<span id="L17" rel="#L17">17</span>
<span id="L18" rel="#L18">18</span>
<span id="L19" rel="#L19">19</span>
<span id="L20" rel="#L20">20</span>
<span id="L21" rel="#L21">21</span>
<span id="L22" rel="#L22">22</span>
<span id="L23" rel="#L23">23</span>
<span id="L24" rel="#L24">24</span>
<span id="L25" rel="#L25">25</span>
<span id="L26" rel="#L26">26</span>
<span id="L27" rel="#L27">27</span>
<span id="L28" rel="#L28">28</span>
<span id="L29" rel="#L29">29</span>
<span id="L30" rel="#L30">30</span>
<span id="L31" rel="#L31">31</span>
<span id="L32" rel="#L32">32</span>
<span id="L33" rel="#L33">33</span>
<span id="L34" rel="#L34">34</span>
<span id="L35" rel="#L35">35</span>
<span id="L36" rel="#L36">36</span>
<span id="L37" rel="#L37">37</span>
<span id="L38" rel="#L38">38</span>
<span id="L39" rel="#L39">39</span>
<span id="L40" rel="#L40">40</span>
<span id="L41" rel="#L41">41</span>
<span id="L42" rel="#L42">42</span>
<span id="L43" rel="#L43">43</span>
<span id="L44" rel="#L44">44</span>
<span id="L45" rel="#L45">45</span>
<span id="L46" rel="#L46">46</span>
<span id="L47" rel="#L47">47</span>
<span id="L48" rel="#L48">48</span>
<span id="L49" rel="#L49">49</span>
<span id="L50" rel="#L50">50</span>
<span id="L51" rel="#L51">51</span>
<span id="L52" rel="#L52">52</span>
<span id="L53" rel="#L53">53</span>
<span id="L54" rel="#L54">54</span>
<span id="L55" rel="#L55">55</span>
<span id="L56" rel="#L56">56</span>
<span id="L57" rel="#L57">57</span>
<span id="L58" rel="#L58">58</span>
<span id="L59" rel="#L59">59</span>
<span id="L60" rel="#L60">60</span>
<span id="L61" rel="#L61">61</span>
<span id="L62" rel="#L62">62</span>
<span id="L63" rel="#L63">63</span>
<span id="L64" rel="#L64">64</span>
<span id="L65" rel="#L65">65</span>
<span id="L66" rel="#L66">66</span>
<span id="L67" rel="#L67">67</span>
<span id="L68" rel="#L68">68</span>
<span id="L69" rel="#L69">69</span>
<span id="L70" rel="#L70">70</span>
<span id="L71" rel="#L71">71</span>
<span id="L72" rel="#L72">72</span>
<span id="L73" rel="#L73">73</span>
<span id="L74" rel="#L74">74</span>
<span id="L75" rel="#L75">75</span>
<span id="L76" rel="#L76">76</span>
<span id="L77" rel="#L77">77</span>
<span id="L78" rel="#L78">78</span>
<span id="L79" rel="#L79">79</span>
<span id="L80" rel="#L80">80</span>
<span id="L81" rel="#L81">81</span>
<span id="L82" rel="#L82">82</span>
<span id="L83" rel="#L83">83</span>
<span id="L84" rel="#L84">84</span>
<span id="L85" rel="#L85">85</span>
<span id="L86" rel="#L86">86</span>
<span id="L87" rel="#L87">87</span>
<span id="L88" rel="#L88">88</span>
<span id="L89" rel="#L89">89</span>
<span id="L90" rel="#L90">90</span>
<span id="L91" rel="#L91">91</span>
<span id="L92" rel="#L92">92</span>
<span id="L93" rel="#L93">93</span>
<span id="L94" rel="#L94">94</span>
<span id="L95" rel="#L95">95</span>
<span id="L96" rel="#L96">96</span>
<span id="L97" rel="#L97">97</span>
<span id="L98" rel="#L98">98</span>
<span id="L99" rel="#L99">99</span>
<span id="L100" rel="#L100">100</span>
<span id="L101" rel="#L101">101</span>
<span id="L102" rel="#L102">102</span>
<span id="L103" rel="#L103">103</span>
<span id="L104" rel="#L104">104</span>
<span id="L105" rel="#L105">105</span>
<span id="L106" rel="#L106">106</span>
<span id="L107" rel="#L107">107</span>
<span id="L108" rel="#L108">108</span>
<span id="L109" rel="#L109">109</span>
<span id="L110" rel="#L110">110</span>
<span id="L111" rel="#L111">111</span>
<span id="L112" rel="#L112">112</span>
<span id="L113" rel="#L113">113</span>
<span id="L114" rel="#L114">114</span>
<span id="L115" rel="#L115">115</span>
<span id="L116" rel="#L116">116</span>
<span id="L117" rel="#L117">117</span>
<span id="L118" rel="#L118">118</span>
<span id="L119" rel="#L119">119</span>
<span id="L120" rel="#L120">120</span>
<span id="L121" rel="#L121">121</span>
<span id="L122" rel="#L122">122</span>
<span id="L123" rel="#L123">123</span>
<span id="L124" rel="#L124">124</span>
<span id="L125" rel="#L125">125</span>
<span id="L126" rel="#L126">126</span>
<span id="L127" rel="#L127">127</span>
<span id="L128" rel="#L128">128</span>
<span id="L129" rel="#L129">129</span>
<span id="L130" rel="#L130">130</span>
<span id="L131" rel="#L131">131</span>
<span id="L132" rel="#L132">132</span>
<span id="L133" rel="#L133">133</span>
<span id="L134" rel="#L134">134</span>
<span id="L135" rel="#L135">135</span>
<span id="L136" rel="#L136">136</span>
<span id="L137" rel="#L137">137</span>
<span id="L138" rel="#L138">138</span>
<span id="L139" rel="#L139">139</span>
<span id="L140" rel="#L140">140</span>
<span id="L141" rel="#L141">141</span>
<span id="L142" rel="#L142">142</span>
<span id="L143" rel="#L143">143</span>
<span id="L144" rel="#L144">144</span>
<span id="L145" rel="#L145">145</span>
<span id="L146" rel="#L146">146</span>
<span id="L147" rel="#L147">147</span>
<span id="L148" rel="#L148">148</span>
<span id="L149" rel="#L149">149</span>
<span id="L150" rel="#L150">150</span>
<span id="L151" rel="#L151">151</span>
<span id="L152" rel="#L152">152</span>
<span id="L153" rel="#L153">153</span>
<span id="L154" rel="#L154">154</span>
<span id="L155" rel="#L155">155</span>
<span id="L156" rel="#L156">156</span>
<span id="L157" rel="#L157">157</span>
<span id="L158" rel="#L158">158</span>
<span id="L159" rel="#L159">159</span>
<span id="L160" rel="#L160">160</span>
<span id="L161" rel="#L161">161</span>
<span id="L162" rel="#L162">162</span>
<span id="L163" rel="#L163">163</span>
<span id="L164" rel="#L164">164</span>
<span id="L165" rel="#L165">165</span>
<span id="L166" rel="#L166">166</span>
<span id="L167" rel="#L167">167</span>
<span id="L168" rel="#L168">168</span>
<span id="L169" rel="#L169">169</span>
<span id="L170" rel="#L170">170</span>
<span id="L171" rel="#L171">171</span>
<span id="L172" rel="#L172">172</span>
<span id="L173" rel="#L173">173</span>
<span id="L174" rel="#L174">174</span>
<span id="L175" rel="#L175">175</span>
<span id="L176" rel="#L176">176</span>
<span id="L177" rel="#L177">177</span>
<span id="L178" rel="#L178">178</span>
<span id="L179" rel="#L179">179</span>
<span id="L180" rel="#L180">180</span>
<span id="L181" rel="#L181">181</span>
<span id="L182" rel="#L182">182</span>
<span id="L183" rel="#L183">183</span>
<span id="L184" rel="#L184">184</span>
<span id="L185" rel="#L185">185</span>
<span id="L186" rel="#L186">186</span>
<span id="L187" rel="#L187">187</span>
<span id="L188" rel="#L188">188</span>
<span id="L189" rel="#L189">189</span>
<span id="L190" rel="#L190">190</span>
<span id="L191" rel="#L191">191</span>
<span id="L192" rel="#L192">192</span>
<span id="L193" rel="#L193">193</span>
<span id="L194" rel="#L194">194</span>
<span id="L195" rel="#L195">195</span>
<span id="L196" rel="#L196">196</span>
<span id="L197" rel="#L197">197</span>
<span id="L198" rel="#L198">198</span>
<span id="L199" rel="#L199">199</span>
<span id="L200" rel="#L200">200</span>
<span id="L201" rel="#L201">201</span>
<span id="L202" rel="#L202">202</span>
<span id="L203" rel="#L203">203</span>
<span id="L204" rel="#L204">204</span>
<span id="L205" rel="#L205">205</span>
<span id="L206" rel="#L206">206</span>
<span id="L207" rel="#L207">207</span>
<span id="L208" rel="#L208">208</span>
<span id="L209" rel="#L209">209</span>
<span id="L210" rel="#L210">210</span>
<span id="L211" rel="#L211">211</span>
<span id="L212" rel="#L212">212</span>
<span id="L213" rel="#L213">213</span>
<span id="L214" rel="#L214">214</span>
<span id="L215" rel="#L215">215</span>
<span id="L216" rel="#L216">216</span>
<span id="L217" rel="#L217">217</span>
<span id="L218" rel="#L218">218</span>
<span id="L219" rel="#L219">219</span>
<span id="L220" rel="#L220">220</span>
<span id="L221" rel="#L221">221</span>
<span id="L222" rel="#L222">222</span>
<span id="L223" rel="#L223">223</span>
<span id="L224" rel="#L224">224</span>
<span id="L225" rel="#L225">225</span>
<span id="L226" rel="#L226">226</span>
<span id="L227" rel="#L227">227</span>
<span id="L228" rel="#L228">228</span>
<span id="L229" rel="#L229">229</span>
<span id="L230" rel="#L230">230</span>
<span id="L231" rel="#L231">231</span>
<span id="L232" rel="#L232">232</span>
<span id="L233" rel="#L233">233</span>
<span id="L234" rel="#L234">234</span>
<span id="L235" rel="#L235">235</span>
<span id="L236" rel="#L236">236</span>
<span id="L237" rel="#L237">237</span>
<span id="L238" rel="#L238">238</span>
<span id="L239" rel="#L239">239</span>
<span id="L240" rel="#L240">240</span>
<span id="L241" rel="#L241">241</span>
<span id="L242" rel="#L242">242</span>
<span id="L243" rel="#L243">243</span>
<span id="L244" rel="#L244">244</span>
<span id="L245" rel="#L245">245</span>
<span id="L246" rel="#L246">246</span>
<span id="L247" rel="#L247">247</span>
<span id="L248" rel="#L248">248</span>
<span id="L249" rel="#L249">249</span>
<span id="L250" rel="#L250">250</span>
<span id="L251" rel="#L251">251</span>
<span id="L252" rel="#L252">252</span>
<span id="L253" rel="#L253">253</span>
<span id="L254" rel="#L254">254</span>
<span id="L255" rel="#L255">255</span>
</pre>
          </td>
          <td width="100%">
                <div class="highlight"><pre><div class='line' id='LC1'><span class="cm">/*</span></div><div class='line' id='LC2'><span class="cm"> * Copyright (C) 2008 The Android Open Source Project</span></div><div class='line' id='LC3'><span class="cm"> * Copyright (C) 2010, Code Aurora Forum. All rights reserved.</span></div><div class='line' id='LC4'><span class="cm"> *</span></div><div class='line' id='LC5'><span class="cm"> * Licensed under the Apache License, Version 2.0 (the &quot;License&quot;);</span></div><div class='line' id='LC6'><span class="cm"> * you may not use this file except in compliance with the License.</span></div><div class='line' id='LC7'><span class="cm"> * You may obtain a copy of the License at</span></div><div class='line' id='LC8'><span class="cm"> *</span></div><div class='line' id='LC9'><span class="cm"> *      http://www.apache.org/licenses/LICENSE-2.0</span></div><div class='line' id='LC10'><span class="cm"> *</span></div><div class='line' id='LC11'><span class="cm"> * Unless required by applicable law or agreed to in writing, software</span></div><div class='line' id='LC12'><span class="cm"> * distributed under the License is distributed on an &quot;AS IS&quot; BASIS,</span></div><div class='line' id='LC13'><span class="cm"> * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.</span></div><div class='line' id='LC14'><span class="cm"> * See the License for the specific language governing permissions and</span></div><div class='line' id='LC15'><span class="cm"> * limitations under the License.</span></div><div class='line' id='LC16'><span class="cm"> */</span></div><div class='line' id='LC17'><br/></div><div class='line' id='LC18'><span class="cp">#ifndef ANDROID_HARDWARE_CAMERA_HARDWARE_INTERFACE_H</span></div><div class='line' id='LC19'><span class="cp">#define ANDROID_HARDWARE_CAMERA_HARDWARE_INTERFACE_H</span></div><div class='line' id='LC20'><br/></div><div class='line' id='LC21'><span class="cp">#include &lt;binder/IMemory.h&gt;</span></div><div class='line' id='LC22'><span class="cp">#include &lt;utils/RefBase.h&gt;</span></div><div class='line' id='LC23'><span class="cp">#include &lt;surfaceflinger/ISurface.h&gt;</span></div><div class='line' id='LC24'><span class="cp">#include &lt;camera/Camera.h&gt;</span></div><div class='line' id='LC25'><span class="cp">#include &lt;camera/CameraParameters.h&gt;</span></div><div class='line' id='LC26'><br/></div><div class='line' id='LC27'><span class="k">namespace</span> <span class="n">android</span> <span class="p">{</span></div><div class='line' id='LC28'><br/></div><div class='line' id='LC29'><span class="k">class</span> <span class="nc">Overlay</span><span class="p">;</span></div><div class='line' id='LC30'><br/></div><div class='line' id='LC31'><span class="cm">/**</span></div><div class='line' id='LC32'><span class="cm"> *  The size of image for display.</span></div><div class='line' id='LC33'><span class="cm"> */</span></div><div class='line' id='LC34'><span class="k">typedef</span> <span class="k">struct</span> <span class="n">image_rect_struct</span></div><div class='line' id='LC35'><span class="p">{</span></div><div class='line' id='LC36'>&nbsp;&nbsp;<span class="n">uint32_t</span> <span class="n">width</span><span class="p">;</span>      <span class="cm">/* Image width */</span></div><div class='line' id='LC37'>&nbsp;&nbsp;<span class="n">uint32_t</span> <span class="n">height</span><span class="p">;</span>     <span class="cm">/* Image height */</span></div><div class='line' id='LC38'><span class="p">}</span> <span class="n">image_rect_type</span><span class="p">;</span></div><div class='line' id='LC39'><br/></div><div class='line' id='LC40'><br/></div><div class='line' id='LC41'><span class="k">typedef</span> <span class="kt">void</span> <span class="p">(</span><span class="o">*</span><span class="n">notify_callback</span><span class="p">)(</span><span class="n">int32_t</span> <span class="n">msgType</span><span class="p">,</span></div><div class='line' id='LC42'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">int32_t</span> <span class="n">ext1</span><span class="p">,</span></div><div class='line' id='LC43'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">int32_t</span> <span class="n">ext2</span><span class="p">,</span></div><div class='line' id='LC44'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">void</span><span class="o">*</span> <span class="n">user</span><span class="p">);</span></div><div class='line' id='LC45'><br/></div><div class='line' id='LC46'><span class="k">typedef</span> <span class="kt">void</span> <span class="p">(</span><span class="o">*</span><span class="n">data_callback</span><span class="p">)(</span><span class="n">int32_t</span> <span class="n">msgType</span><span class="p">,</span></div><div class='line' id='LC47'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">const</span> <span class="n">sp</span><span class="o">&lt;</span><span class="n">IMemory</span><span class="o">&gt;&amp;</span> <span class="n">dataPtr</span><span class="p">,</span></div><div class='line' id='LC48'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">void</span><span class="o">*</span> <span class="n">user</span><span class="p">);</span></div><div class='line' id='LC49'><span class="cp">#ifdef OMAP_ENHANCEMENT</span></div><div class='line' id='LC50'><span class="k">typedef</span> <span class="kt">void</span> <span class="p">(</span><span class="o">*</span><span class="n">data_callback_timestamp</span><span class="p">)(</span><span class="n">nsecs_t</span> <span class="n">timestamp</span><span class="p">,</span></div><div class='line' id='LC51'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">int32_t</span> <span class="n">msgType</span><span class="p">,</span></div><div class='line' id='LC52'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">const</span> <span class="n">sp</span><span class="o">&lt;</span><span class="n">IMemory</span><span class="o">&gt;&amp;</span> <span class="n">dataPtr</span><span class="p">,</span></div><div class='line' id='LC53'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">void</span><span class="o">*</span> <span class="n">user</span><span class="p">,</span></div><div class='line' id='LC54'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">uint32_t</span> <span class="n">offset</span><span class="p">,</span></div><div class='line' id='LC55'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">uint32_t</span> <span class="n">stride</span><span class="p">);</span></div><div class='line' id='LC56'><span class="cp">#else</span></div><div class='line' id='LC57'><span class="k">typedef</span> <span class="kt">void</span> <span class="p">(</span><span class="o">*</span><span class="n">data_callback_timestamp</span><span class="p">)(</span><span class="n">nsecs_t</span> <span class="n">timestamp</span><span class="p">,</span></div><div class='line' id='LC58'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">int32_t</span> <span class="n">msgType</span><span class="p">,</span></div><div class='line' id='LC59'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">const</span> <span class="n">sp</span><span class="o">&lt;</span><span class="n">IMemory</span><span class="o">&gt;&amp;</span> <span class="n">dataPtr</span><span class="p">,</span></div><div class='line' id='LC60'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">void</span><span class="o">*</span> <span class="n">user</span><span class="p">);</span></div><div class='line' id='LC61'><span class="cp">#endif</span></div><div class='line' id='LC62'><span class="cm">/**</span></div><div class='line' id='LC63'><span class="cm"> * CameraHardwareInterface.h defines the interface to the</span></div><div class='line' id='LC64'><span class="cm"> * camera hardware abstraction layer, used for setting and getting</span></div><div class='line' id='LC65'><span class="cm"> * parameters, live previewing, and taking pictures.</span></div><div class='line' id='LC66'><span class="cm"> *</span></div><div class='line' id='LC67'><span class="cm"> * It is a referenced counted interface with RefBase as its base class.</span></div><div class='line' id='LC68'><span class="cm"> * CameraService calls openCameraHardware() to retrieve a strong pointer to the</span></div><div class='line' id='LC69'><span class="cm"> * instance of this interface and may be called multiple times. The</span></div><div class='line' id='LC70'><span class="cm"> * following steps describe a typical sequence:</span></div><div class='line' id='LC71'><span class="cm"> *</span></div><div class='line' id='LC72'><span class="cm"> *   -# After CameraService calls openCameraHardware(), getParameters() and</span></div><div class='line' id='LC73'><span class="cm"> *      setParameters() are used to initialize the camera instance.</span></div><div class='line' id='LC74'><span class="cm"> *      CameraService calls getPreviewHeap() to establish access to the</span></div><div class='line' id='LC75'><span class="cm"> *      preview heap so it can be registered with SurfaceFlinger for</span></div><div class='line' id='LC76'><span class="cm"> *      efficient display updating while in preview mode.</span></div><div class='line' id='LC77'><span class="cm"> *   -# startPreview() is called.  The camera instance then periodically</span></div><div class='line' id='LC78'><span class="cm"> *      sends the message CAMERA_MSG_PREVIEW_FRAME (if enabled) each time</span></div><div class='line' id='LC79'><span class="cm"> *      a new preview frame is available.  If data callback code needs to use</span></div><div class='line' id='LC80'><span class="cm"> *      this memory after returning, it must copy the data.</span></div><div class='line' id='LC81'><span class="cm"> *</span></div><div class='line' id='LC82'><span class="cm"> * Prior to taking a picture, CameraService calls autofocus(). When auto</span></div><div class='line' id='LC83'><span class="cm"> * focusing has completed, the camera instance sends a CAMERA_MSG_FOCUS notification,</span></div><div class='line' id='LC84'><span class="cm"> * which informs the application whether focusing was successful. The camera instance</span></div><div class='line' id='LC85'><span class="cm"> * only sends this message once and it is up  to the application to call autoFocus()</span></div><div class='line' id='LC86'><span class="cm"> * again if refocusing is desired.</span></div><div class='line' id='LC87'><span class="cm"> *</span></div><div class='line' id='LC88'><span class="cm"> * CameraService calls takePicture() to request the camera instance take a</span></div><div class='line' id='LC89'><span class="cm"> * picture. At this point, if a shutter, postview, raw, and/or compressed callback</span></div><div class='line' id='LC90'><span class="cm"> * is desired, the corresponding message must be enabled. As with CAMERA_MSG_PREVIEW_FRAME,</span></div><div class='line' id='LC91'><span class="cm"> * any memory provided in a data callback must be copied if it&#39;s needed after returning.</span></div><div class='line' id='LC92'><span class="cm"> */</span></div><div class='line' id='LC93'><span class="k">class</span> <span class="nc">CameraHardwareInterface</span> <span class="o">:</span> <span class="k">public</span> <span class="k">virtual</span> <span class="n">RefBase</span> <span class="p">{</span></div><div class='line' id='LC94'><span class="k">public</span><span class="o">:</span></div><div class='line' id='LC95'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">virtual</span> <span class="o">~</span><span class="n">CameraHardwareInterface</span><span class="p">()</span> <span class="p">{</span> <span class="p">}</span></div><div class='line' id='LC96'><br/></div><div class='line' id='LC97'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="cm">/** Return the IMemoryHeap for the preview image heap */</span></div><div class='line' id='LC98'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">virtual</span> <span class="n">sp</span><span class="o">&lt;</span><span class="n">IMemoryHeap</span><span class="o">&gt;</span>         <span class="n">getPreviewHeap</span><span class="p">()</span> <span class="k">const</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC99'><br/></div><div class='line' id='LC100'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="cm">/** Return the IMemoryHeap for the raw image heap */</span></div><div class='line' id='LC101'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">virtual</span> <span class="n">sp</span><span class="o">&lt;</span><span class="n">IMemoryHeap</span><span class="o">&gt;</span>         <span class="n">getRawHeap</span><span class="p">()</span> <span class="k">const</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC102'><br/></div><div class='line' id='LC103'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="cm">/** Set the notification and data callbacks */</span></div><div class='line' id='LC104'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">virtual</span> <span class="kt">void</span> <span class="n">setCallbacks</span><span class="p">(</span><span class="n">notify_callback</span> <span class="n">notify_cb</span><span class="p">,</span></div><div class='line' id='LC105'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">data_callback</span> <span class="n">data_cb</span><span class="p">,</span></div><div class='line' id='LC106'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">data_callback_timestamp</span> <span class="n">data_cb_timestamp</span><span class="p">,</span></div><div class='line' id='LC107'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">void</span><span class="o">*</span> <span class="n">user</span><span class="p">)</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC108'><br/></div><div class='line' id='LC109'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="cm">/**</span></div><div class='line' id='LC110'><span class="cm">     * The following three functions all take a msgtype,</span></div><div class='line' id='LC111'><span class="cm">     * which is a bitmask of the messages defined in</span></div><div class='line' id='LC112'><span class="cm">     * include/ui/Camera.h</span></div><div class='line' id='LC113'><span class="cm">     */</span></div><div class='line' id='LC114'><br/></div><div class='line' id='LC115'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="cm">/**</span></div><div class='line' id='LC116'><span class="cm">     * Enable a message, or set of messages.</span></div><div class='line' id='LC117'><span class="cm">     */</span></div><div class='line' id='LC118'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">virtual</span> <span class="kt">void</span>        <span class="n">enableMsgType</span><span class="p">(</span><span class="n">int32_t</span> <span class="n">msgType</span><span class="p">)</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC119'><br/></div><div class='line' id='LC120'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="cm">/**</span></div><div class='line' id='LC121'><span class="cm">     * Disable a message, or a set of messages.</span></div><div class='line' id='LC122'><span class="cm">     */</span></div><div class='line' id='LC123'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">virtual</span> <span class="kt">void</span>        <span class="n">disableMsgType</span><span class="p">(</span><span class="n">int32_t</span> <span class="n">msgType</span><span class="p">)</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC124'><br/></div><div class='line' id='LC125'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="cm">/**</span></div><div class='line' id='LC126'><span class="cm">     * Query whether a message, or a set of messages, is enabled.</span></div><div class='line' id='LC127'><span class="cm">     * Note that this is operates as an AND, if any of the messages</span></div><div class='line' id='LC128'><span class="cm">     * queried are off, this will return false.</span></div><div class='line' id='LC129'><span class="cm">     */</span></div><div class='line' id='LC130'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">virtual</span> <span class="kt">bool</span>        <span class="n">msgTypeEnabled</span><span class="p">(</span><span class="n">int32_t</span> <span class="n">msgType</span><span class="p">)</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC131'><br/></div><div class='line' id='LC132'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="cm">/**</span></div><div class='line' id='LC133'><span class="cm">     * Start preview mode.</span></div><div class='line' id='LC134'><span class="cm">     */</span></div><div class='line' id='LC135'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">virtual</span> <span class="n">status_t</span>    <span class="n">startPreview</span><span class="p">()</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC136'><br/></div><div class='line' id='LC137'><span class="cp">#ifdef USE_GETBUFFERINFO</span></div><div class='line' id='LC138'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="cm">/**</span></div><div class='line' id='LC139'><span class="cm">     * Query the recording buffer information from HAL.</span></div><div class='line' id='LC140'><span class="cm">     * This is needed because the opencore expects the buffer</span></div><div class='line' id='LC141'><span class="cm">     * information before starting the recording.</span></div><div class='line' id='LC142'><span class="cm">     */</span></div><div class='line' id='LC143'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">virtual</span> <span class="n">status_t</span>    <span class="n">getBufferInfo</span><span class="p">(</span><span class="n">sp</span><span class="o">&lt;</span><span class="n">IMemory</span><span class="o">&gt;&amp;</span> <span class="n">Frame</span><span class="p">,</span> <span class="n">size_t</span> <span class="o">*</span><span class="n">alignedSize</span><span class="p">)</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC144'><span class="cp">#endif</span></div><div class='line' id='LC145'><span class="cp">#ifdef CAF_CAMERA_GB_REL</span></div><div class='line' id='LC146'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="cm">/**</span></div><div class='line' id='LC147'><span class="cm">     * Encode the YUV data.</span></div><div class='line' id='LC148'><span class="cm">     */</span></div><div class='line' id='LC149'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">virtual</span> <span class="kt">void</span>        <span class="n">encodeData</span><span class="p">()</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC150'><span class="cp">#endif</span></div><div class='line' id='LC151'><br/></div><div class='line' id='LC152'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="cm">/**</span></div><div class='line' id='LC153'><span class="cm">     * Only used if overlays are used for camera preview.</span></div><div class='line' id='LC154'><span class="cm">     */</span></div><div class='line' id='LC155'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">virtual</span> <span class="kt">bool</span>         <span class="n">useOverlay</span><span class="p">()</span> <span class="p">{</span><span class="k">return</span> <span class="kc">false</span><span class="p">;}</span></div><div class='line' id='LC156'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">virtual</span> <span class="n">status_t</span>     <span class="n">setOverlay</span><span class="p">(</span><span class="k">const</span> <span class="n">sp</span><span class="o">&lt;</span><span class="n">Overlay</span><span class="o">&gt;</span> <span class="o">&amp;</span><span class="n">overlay</span><span class="p">)</span> <span class="p">{</span><span class="k">return</span> <span class="n">BAD_VALUE</span><span class="p">;}</span></div><div class='line' id='LC157'><br/></div><div class='line' id='LC158'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="cm">/**</span></div><div class='line' id='LC159'><span class="cm">     * Stop a previously started preview.</span></div><div class='line' id='LC160'><span class="cm">     */</span></div><div class='line' id='LC161'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">virtual</span> <span class="kt">void</span>        <span class="n">stopPreview</span><span class="p">()</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC162'><br/></div><div class='line' id='LC163'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="cm">/**</span></div><div class='line' id='LC164'><span class="cm">     * Returns true if preview is enabled.</span></div><div class='line' id='LC165'><span class="cm">     */</span></div><div class='line' id='LC166'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">virtual</span> <span class="kt">bool</span>        <span class="n">previewEnabled</span><span class="p">()</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC167'><br/></div><div class='line' id='LC168'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="cm">/**</span></div><div class='line' id='LC169'><span class="cm">     * Start record mode. When a record image is available a CAMERA_MSG_VIDEO_FRAME</span></div><div class='line' id='LC170'><span class="cm">     * message is sent with the corresponding frame. Every record frame must be released</span></div><div class='line' id='LC171'><span class="cm">     * by calling releaseRecordingFrame().</span></div><div class='line' id='LC172'><span class="cm">     */</span></div><div class='line' id='LC173'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">virtual</span> <span class="n">status_t</span>    <span class="n">startRecording</span><span class="p">()</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC174'><br/></div><div class='line' id='LC175'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="cm">/**</span></div><div class='line' id='LC176'><span class="cm">     * Stop a previously started recording.</span></div><div class='line' id='LC177'><span class="cm">     */</span></div><div class='line' id='LC178'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">virtual</span> <span class="kt">void</span>        <span class="n">stopRecording</span><span class="p">()</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC179'><br/></div><div class='line' id='LC180'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="cm">/**</span></div><div class='line' id='LC181'><span class="cm">     * Returns true if recording is enabled.</span></div><div class='line' id='LC182'><span class="cm">     */</span></div><div class='line' id='LC183'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">virtual</span> <span class="kt">bool</span>        <span class="n">recordingEnabled</span><span class="p">()</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC184'><br/></div><div class='line' id='LC185'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="cm">/**</span></div><div class='line' id='LC186'><span class="cm">     * Release a record frame previously returned by CAMERA_MSG_VIDEO_FRAME.</span></div><div class='line' id='LC187'><span class="cm">     */</span></div><div class='line' id='LC188'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">virtual</span> <span class="kt">void</span>        <span class="n">releaseRecordingFrame</span><span class="p">(</span><span class="k">const</span> <span class="n">sp</span><span class="o">&lt;</span><span class="n">IMemory</span><span class="o">&gt;&amp;</span> <span class="n">mem</span><span class="p">)</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC189'><br/></div><div class='line' id='LC190'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="cm">/**</span></div><div class='line' id='LC191'><span class="cm">     * Start auto focus, the notification callback routine is called</span></div><div class='line' id='LC192'><span class="cm">     * with CAMERA_MSG_FOCUS once when focusing is complete. autoFocus()</span></div><div class='line' id='LC193'><span class="cm">     * will be called again if another auto focus is needed.</span></div><div class='line' id='LC194'><span class="cm">     */</span></div><div class='line' id='LC195'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">virtual</span> <span class="n">status_t</span>    <span class="n">autoFocus</span><span class="p">()</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC196'><br/></div><div class='line' id='LC197'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="cm">/**</span></div><div class='line' id='LC198'><span class="cm">     * Cancels auto-focus function. If the auto-focus is still in progress,</span></div><div class='line' id='LC199'><span class="cm">     * this function will cancel it. Whether the auto-focus is in progress</span></div><div class='line' id='LC200'><span class="cm">     * or not, this function will return the focus position to the default.</span></div><div class='line' id='LC201'><span class="cm">     * If the camera does not support auto-focus, this is a no-op.</span></div><div class='line' id='LC202'><span class="cm">     */</span></div><div class='line' id='LC203'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">virtual</span> <span class="n">status_t</span>    <span class="n">cancelAutoFocus</span><span class="p">()</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC204'><br/></div><div class='line' id='LC205'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="cm">/**</span></div><div class='line' id='LC206'><span class="cm">     * Take a picture.</span></div><div class='line' id='LC207'><span class="cm">     */</span></div><div class='line' id='LC208'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">virtual</span> <span class="n">status_t</span>    <span class="n">takePicture</span><span class="p">()</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC209'><br/></div><div class='line' id='LC210'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="cm">/**</span></div><div class='line' id='LC211'><span class="cm">     * Cancel a picture that was started with takePicture.  Calling this</span></div><div class='line' id='LC212'><span class="cm">     * method when no picture is being taken is a no-op.</span></div><div class='line' id='LC213'><span class="cm">     */</span></div><div class='line' id='LC214'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">virtual</span> <span class="n">status_t</span>    <span class="n">cancelPicture</span><span class="p">()</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC215'><br/></div><div class='line' id='LC216'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="cm">/**</span></div><div class='line' id='LC217'><span class="cm">     * Set the camera parameters. This returns BAD_VALUE if any parameter is</span></div><div class='line' id='LC218'><span class="cm">     * invalid or not supported. */</span></div><div class='line' id='LC219'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">virtual</span> <span class="n">status_t</span>    <span class="n">setParameters</span><span class="p">(</span><span class="k">const</span> <span class="n">CameraParameters</span><span class="o">&amp;</span> <span class="n">params</span><span class="p">)</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC220'><br/></div><div class='line' id='LC221'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="cm">/** Return the camera parameters. */</span></div><div class='line' id='LC222'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">virtual</span> <span class="n">CameraParameters</span>  <span class="n">getParameters</span><span class="p">()</span> <span class="k">const</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC223'><br/></div><div class='line' id='LC224'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="cm">/**</span></div><div class='line' id='LC225'><span class="cm">     * Send command to camera driver.</span></div><div class='line' id='LC226'><span class="cm">     */</span></div><div class='line' id='LC227'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">virtual</span> <span class="n">status_t</span> <span class="n">sendCommand</span><span class="p">(</span><span class="n">int32_t</span> <span class="n">cmd</span><span class="p">,</span> <span class="n">int32_t</span> <span class="n">arg1</span><span class="p">,</span> <span class="n">int32_t</span> <span class="n">arg2</span><span class="p">)</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC228'><br/></div><div class='line' id='LC229'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="cm">/**</span></div><div class='line' id='LC230'><span class="cm">     * Release the hardware resources owned by this object.  Note that this is</span></div><div class='line' id='LC231'><span class="cm">     * *not* done in the destructor.</span></div><div class='line' id='LC232'><span class="cm">     */</span></div><div class='line' id='LC233'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">virtual</span> <span class="kt">void</span> <span class="n">release</span><span class="p">()</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC234'><br/></div><div class='line' id='LC235'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="cm">/**</span></div><div class='line' id='LC236'><span class="cm">     * Dump state of the camera hardware</span></div><div class='line' id='LC237'><span class="cm">     */</span></div><div class='line' id='LC238'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">virtual</span> <span class="n">status_t</span> <span class="n">dump</span><span class="p">(</span><span class="kt">int</span> <span class="n">fd</span><span class="p">,</span> <span class="k">const</span> <span class="n">Vector</span><span class="o">&lt;</span><span class="n">String16</span><span class="o">&gt;&amp;</span> <span class="n">args</span><span class="p">)</span> <span class="k">const</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC239'><br/></div><div class='line' id='LC240'><span class="p">};</span></div><div class='line' id='LC241'><br/></div><div class='line' id='LC242'><span class="cm">/**</span></div><div class='line' id='LC243'><span class="cm"> * The functions need to be provided by the camera HAL.</span></div><div class='line' id='LC244'><span class="cm"> *</span></div><div class='line' id='LC245'><span class="cm"> * If getNumberOfCameras() returns N, the valid cameraId for getCameraInfo()</span></div><div class='line' id='LC246'><span class="cm"> * and openCameraHardware() is 0 to N-1.</span></div><div class='line' id='LC247'><span class="cm"> */</span></div><div class='line' id='LC248'><span class="k">extern</span> <span class="s">&quot;C&quot;</span> <span class="kt">int</span> <span class="n">HAL_getNumberOfCameras</span><span class="p">();</span></div><div class='line' id='LC249'><span class="k">extern</span> <span class="s">&quot;C&quot;</span> <span class="kt">void</span> <span class="n">HAL_getCameraInfo</span><span class="p">(</span><span class="kt">int</span> <span class="n">cameraId</span><span class="p">,</span> <span class="k">struct</span> <span class="n">CameraInfo</span><span class="o">*</span> <span class="n">cameraInfo</span><span class="p">);</span></div><div class='line' id='LC250'><span class="cm">/* HAL should return NULL if it fails to open camera hardware. */</span></div><div class='line' id='LC251'><span class="k">extern</span> <span class="s">&quot;C&quot;</span> <span class="n">sp</span><span class="o">&lt;</span><span class="n">CameraHardwareInterface</span><span class="o">&gt;</span> <span class="n">HAL_openCameraHardware</span><span class="p">(</span><span class="kt">int</span> <span class="n">cameraId</span><span class="p">);</span></div><div class='line' id='LC252'><br/></div><div class='line' id='LC253'><span class="p">};</span>  <span class="c1">// namespace android</span></div><div class='line' id='LC254'><br/></div><div class='line' id='LC255'><span class="cp">#endif</span></div></pre></div>
          </td>
        </tr>
      </table>
  </div>

          </div>
        </div>
      </div>
    </div>

  </div>

<div class="frame frame-loading large-loading-area" style="display:none;" data-tree-list-url="/CyanogenMod/android_frameworks_base/tree-list/4c8dc6e46d44b2bbec7694dc35f403276c0cedb1" data-blob-url-prefix="/CyanogenMod/android_frameworks_base/blob/4c8dc6e46d44b2bbec7694dc35f403276c0cedb1">
  <img src="https://a248.e.akamai.net/assets.github.com/images/spinners/octocat-spinner-64.gif?1329872005" height="64" width="64">
</div>

      </div>
      <div class="context-overlay"></div>
    </div>


      <!-- footer -->
      <div id="footer" >
        
  <div class="upper_footer">
     <div class="container clearfix">

       <!--[if IE]><h4 id="blacktocat_ie">GitHub Links</h4><![endif]-->
       <![if !IE]><h4 id="blacktocat">GitHub Links</h4><![endif]>

       <ul class="footer_nav">
         <h4>GitHub</h4>
         <li><a href="https://github.com/about">About</a></li>
         <li><a href="https://github.com/blog">Blog</a></li>
         <li><a href="https://github.com/features">Features</a></li>
         <li><a href="https://github.com/contact">Contact &amp; Support</a></li>
         <li><a href="https://github.com/training">Training</a></li>
         <li><a href="http://enterprise.github.com/">GitHub Enterprise</a></li>
         <li><a href="http://status.github.com/">Site Status</a></li>
       </ul>

       <ul class="footer_nav">
         <h4>Tools</h4>
         <li><a href="http://get.gaug.es/">Gauges: Analyze web traffic</a></li>
         <li><a href="http://speakerdeck.com">Speaker Deck: Presentations</a></li>
         <li><a href="https://gist.github.com">Gist: Code snippets</a></li>
         <li><a href="http://mac.github.com/">GitHub for Mac</a></li>
         <li><a href="http://mobile.github.com/">Issues for iPhone</a></li>
         <li><a href="http://jobs.github.com/">Job Board</a></li>
       </ul>

       <ul class="footer_nav">
         <h4>Extras</h4>
         <li><a href="http://shop.github.com/">GitHub Shop</a></li>
         <li><a href="http://octodex.github.com/">The Octodex</a></li>
       </ul>

       <ul class="footer_nav">
         <h4>Documentation</h4>
         <li><a href="http://help.github.com/">GitHub Help</a></li>
         <li><a href="http://developer.github.com/">Developer API</a></li>
         <li><a href="http://github.github.com/github-flavored-markdown/">GitHub Flavored Markdown</a></li>
         <li><a href="http://pages.github.com/">GitHub Pages</a></li>
       </ul>

     </div><!-- /.site -->
  </div><!-- /.upper_footer -->

<div class="lower_footer">
  <div class="container clearfix">
    <!--[if IE]><div id="legal_ie"><![endif]-->
    <![if !IE]><div id="legal"><![endif]>
      <ul>
          <li><a href="https://github.com/site/terms">Terms of Service</a></li>
          <li><a href="https://github.com/site/privacy">Privacy</a></li>
          <li><a href="https://github.com/security">Security</a></li>
      </ul>

      <p>&copy; 2012 <span title="0.15180s from fe10.rs.github.com">GitHub</span> Inc. All rights reserved.</p>
    </div><!-- /#legal or /#legal_ie-->

      <div class="sponsor">
        <a href="http://www.rackspace.com" class="logo">
          <img alt="Dedicated Server" height="36" src="https://a248.e.akamai.net/assets.github.com/images/modules/footer/rackspaces_logo.png?1329521039" width="38" />
        </a>
        Powered by the <a href="http://www.rackspace.com ">Dedicated
        Servers</a> and<br/> <a href="http://www.rackspacecloud.com">Cloud
        Computing</a> of Rackspace Hosting<span>&reg;</span>
      </div>
  </div><!-- /.site -->
</div><!-- /.lower_footer -->

      </div><!-- /#footer -->

    

<div id="keyboard_shortcuts_pane" class="instapaper_ignore readability-extra" style="display:none">
  <h2>Keyboard Shortcuts <small><a href="#" class="js-see-all-keyboard-shortcuts">(see all)</a></small></h2>

  <div class="columns threecols">
    <div class="column first">
      <h3>Site wide shortcuts</h3>
      <dl class="keyboard-mappings">
        <dt>s</dt>
        <dd>Focus site search</dd>
      </dl>
      <dl class="keyboard-mappings">
        <dt>?</dt>
        <dd>Bring up this help dialog</dd>
      </dl>
    </div><!-- /.column.first -->

    <div class="column middle" style='display:none'>
      <h3>Commit list</h3>
      <dl class="keyboard-mappings">
        <dt>j</dt>
        <dd>Move selection down</dd>
      </dl>
      <dl class="keyboard-mappings">
        <dt>k</dt>
        <dd>Move selection up</dd>
      </dl>
      <dl class="keyboard-mappings">
        <dt>c <em>or</em> o <em>or</em> enter</dt>
        <dd>Open commit</dd>
      </dl>
      <dl class="keyboard-mappings">
        <dt>y</dt>
        <dd>Expand URL to its canonical form</dd>
      </dl>
    </div><!-- /.column.first -->

    <div class="column last" style='display:none'>
      <h3>Pull request list</h3>
      <dl class="keyboard-mappings">
        <dt>j</dt>
        <dd>Move selection down</dd>
      </dl>
      <dl class="keyboard-mappings">
        <dt>k</dt>
        <dd>Move selection up</dd>
      </dl>
      <dl class="keyboard-mappings">
        <dt>o <em>or</em> enter</dt>
        <dd>Open issue</dd>
      </dl>
    </div><!-- /.columns.last -->

  </div><!-- /.columns.equacols -->

  <div style='display:none'>
    <div class="rule"></div>

    <h3>Issues</h3>

    <div class="columns threecols">
      <div class="column first">
        <dl class="keyboard-mappings">
          <dt>j</dt>
          <dd>Move selection down</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>k</dt>
          <dd>Move selection up</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>x</dt>
          <dd>Toggle selection</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>o <em>or</em> enter</dt>
          <dd>Open issue</dd>
        </dl>
      </div><!-- /.column.first -->
      <div class="column middle">
        <dl class="keyboard-mappings">
          <dt>I</dt>
          <dd>Mark selection as read</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>U</dt>
          <dd>Mark selection as unread</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>y</dt>
          <dd>Remove selection from view</dd>
        </dl>
      </div><!-- /.column.middle -->
      <div class="column last">
        <dl class="keyboard-mappings">
          <dt>c</dt>
          <dd>Create issue</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>l</dt>
          <dd>Create label</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>i</dt>
          <dd>Back to inbox</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>u</dt>
          <dd>Back to issues</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>/</dt>
          <dd>Focus issues search</dd>
        </dl>
      </div>
    </div>
  </div>

  <div style='display:none'>
    <div class="rule"></div>

    <h3>Issues Dashboard</h3>

    <div class="columns threecols">
      <div class="column first">
        <dl class="keyboard-mappings">
          <dt>j</dt>
          <dd>Move selection down</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>k</dt>
          <dd>Move selection up</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>o <em>or</em> enter</dt>
          <dd>Open issue</dd>
        </dl>
      </div><!-- /.column.first -->
    </div>
  </div>

  <div style='display:none'>
    <div class="rule"></div>

    <h3>Network Graph</h3>
    <div class="columns equacols">
      <div class="column first">
        <dl class="keyboard-mappings">
          <dt><span class="badmono">←</span> <em>or</em> h</dt>
          <dd>Scroll left</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt><span class="badmono">→</span> <em>or</em> l</dt>
          <dd>Scroll right</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt><span class="badmono">↑</span> <em>or</em> k</dt>
          <dd>Scroll up</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt><span class="badmono">↓</span> <em>or</em> j</dt>
          <dd>Scroll down</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>t</dt>
          <dd>Toggle visibility of head labels</dd>
        </dl>
      </div><!-- /.column.first -->
      <div class="column last">
        <dl class="keyboard-mappings">
          <dt>shift <span class="badmono">←</span> <em>or</em> shift h</dt>
          <dd>Scroll all the way left</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>shift <span class="badmono">→</span> <em>or</em> shift l</dt>
          <dd>Scroll all the way right</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>shift <span class="badmono">↑</span> <em>or</em> shift k</dt>
          <dd>Scroll all the way up</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>shift <span class="badmono">↓</span> <em>or</em> shift j</dt>
          <dd>Scroll all the way down</dd>
        </dl>
      </div><!-- /.column.last -->
    </div>
  </div>

  <div >
    <div class="rule"></div>
    <div class="columns threecols">
      <div class="column first" >
        <h3>Source Code Browsing</h3>
        <dl class="keyboard-mappings">
          <dt>t</dt>
          <dd>Activates the file finder</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>l</dt>
          <dd>Jump to line</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>w</dt>
          <dd>Switch branch/tag</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>y</dt>
          <dd>Expand URL to its canonical form</dd>
        </dl>
      </div>
    </div>
  </div>
</div>

    <div id="markdown-help" class="instapaper_ignore readability-extra">
  <h2>Markdown Cheat Sheet</h2>

  <div class="cheatsheet-content">

  <div class="mod">
    <div class="col">
      <h3>Format Text</h3>
      <p>Headers</p>
      <pre>
# This is an &lt;h1&gt; tag
## This is an &lt;h2&gt; tag
###### This is an &lt;h6&gt; tag</pre>
     <p>Text styles</p>
     <pre>
*This text will be italic*
_This will also be italic_
**This text will be bold**
__This will also be bold__

*You **can** combine them*
</pre>
    </div>
    <div class="col">
      <h3>Lists</h3>
      <p>Unordered</p>
      <pre>
* Item 1
* Item 2
  * Item 2a
  * Item 2b</pre>
     <p>Ordered</p>
     <pre>
1. Item 1
2. Item 2
3. Item 3
   * Item 3a
   * Item 3b</pre>
    </div>
    <div class="col">
      <h3>Miscellaneous</h3>
      <p>Images</p>
      <pre>
![GitHub Logo](/images/logo.png)
Format: ![Alt Text](url)
</pre>
     <p>Links</p>
     <pre>
http://github.com - automatic!
[GitHub](http://github.com)</pre>
<p>Blockquotes</p>
     <pre>
As Kanye West said:

> We're living the future so
> the present is our past.
</pre>
    </div>
  </div>
  <div class="rule"></div>

  <h3>Code Examples in Markdown</h3>
  <div class="col">
      <p>Syntax highlighting with <a href="http://github.github.com/github-flavored-markdown/" title="GitHub Flavored Markdown" target="_blank">GFM</a></p>
      <pre>
```javascript
function fancyAlert(arg) {
  if(arg) {
    $.facebox({div:'#foo'})
  }
}
```</pre>
    </div>
    <div class="col">
      <p>Or, indent your code 4 spaces</p>
      <pre>
Here is a Python code example
without syntax highlighting:

    def foo:
      if not bar:
        return true</pre>
    </div>
    <div class="col">
      <p>Inline code for comments</p>
      <pre>
I think you should use an
`&lt;addr&gt;` element here instead.</pre>
    </div>
  </div>

  </div>
</div>


    <div class="ajax-error-message">
      <p><span class="icon"></span> Something went wrong with that request. Please try again. <a href="javascript:;" class="ajax-error-dismiss">Dismiss</a></p>
    </div>

    
    
    
    <span id='server_response_time' data-time='0.15448' data-host='fe10'></span>
  </body>
</html>


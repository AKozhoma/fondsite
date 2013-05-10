var $ = jQuery.noConflict();
$(document).ready(function(){
$(".views-view-grid.cols-3 td").hover(
  function () {
    $(this).addClass("hovertd");
  },
  function () {
    $(this).removeClass("hovertd");
  }
);
});

$(document).ready(function(){
$(".views-view-grid.cols-3 td").hover(
  function () {
    $(this).addClass("hovertd2");
  },
  function () {
    $(this).removeClass("hovertd2");
  }
);
});
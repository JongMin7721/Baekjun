let check1=0,check2=0,check3=0,check4=0;

function showList(tabName) {
    var i;
    var tablist = document.getElementsByClassName("tab-list");
    for (i = 0; i < tablist.length; i++) {
        tablist[i].style.display = "none";
    }
    
    if (check == 0) {
        document.getElementById(tabName).style.display = "block";
        check = 1;
    } else {
        document.getElementById(tabName).style.display = "none";
        check = 0;
    }
}

function showTab(tabName) {
    var i;
    var tabContent = document.getElementsByClassName("tab-content");
    for (i = 0; i < tabContent.length; i++) {
        tabContent[i].style.display = "none";
    }
    document.getElementById(tabName).style.display = "block";
}

// 브라우저 크기 변경시 호출되는 함수 
window.onresize = function(){
    let bodyHe = document.querySelector('body').clientHeight;
    let bodyWi = document.querySelector('body').clientWidth;
    let navwi = document.querySelector('.nav-main');
    let secwi = document.querySelector('#main');
    secwi.style.width = bodyWi - 130 + "px";
    navwi.style.height = bodyHe - 130 + "px";
    secwi.style.height = bodyHe - 130 + "px";
}

// 창 로딩씨 호출 함수
function windowonload() {
    let bodyHe = document.querySelector('body').clientHeight;
    let bodyWi = document.querySelector('body').clientWidth;
    let navwi = document.querySelector('.nav-main');
    let secwi = document.querySelector('#main');
    secwi.style.height = bodyHe - 130 + "px";
    secwi.style.width = bodyWi - 130 + "px";
    navwi.style.height = bodyHe - 130 + "px";
}
window.onload = windowonload;
layout=--布局奠定

{
  LinearLayout,
  orientation = "horizontal",
  id = "悬浮",
  {
    LinearLayout,
    id = "悬浮球",
    {
      CardView,
      layout_height = "45dp",
      layout_marginLeft = "10dp",
      layout_marginBottom = "10dp",
      layout_marginTop = "10dp",
      radius = 360,
      layout_width = "45dp",
      background = "#ffffff",
      elevation = "5dp",
      {
        ImageView,
        layout_width = "match_parent",
        src = "icon.png",
        layout_height = "match_parent"
      }
    }
  },
  {
    LinearLayout,
    orientation = "vertical",
    {
      CardView,
      id = "二级悬浮",
      layout_marginRight = "10dp",
      elevation = "5dp",
      layout_marginLeft = "5dp",
      layout_marginBottom = "5dp",
      layout_width = "250dp",
      background = "#FF0095C0",
      layout_marginTop = "10dp",
      {
        MarText,
        layout_marginTop = "5dp",
        ellipsize = "marquee",
        textColor = "#ffffff",
        layout_marginBottom = "2dp",
        textSize = "16dp",
        text = "二进制套用",
        layout_width = "match_parent",
        layout_margin = "15dp",
        singleLine = true
      },
      {
        CardView,
        layout_marginTop = "30dp",
        layout_width = "fill",
        layout_height = "1dp",
        CardBackgroundColor = "#ffffff"
      },
      {
        ScrollView,
        verticalScrollBarEnabled = false,
        layout_width = "fill",
        layout_height = "fill",
        layout_margin = "5dp",
        layout_marginTop = "30dp",
        {
          LinearLayout,
          layout_width = "match_parent",
          layout_marginBottom = "2dp",
          orientation = "vertical",
          {
            TextView,
            layout_height = "match_parent",
            layout_gravity = "left",
            paddingLeft = "13dp",
            text = "待添加",
            textColor = "#2ec4b6",
            textSize = "13sp",
            layout_marginTop = "5dp"
          },
          {
            CardView,
            layout_marginTop = "3dp",
            layout_width = "fill",
            layout_height = "1dp",
            CardBackgroundColor = "#ffffff"
          },
          {
            CardView,
            layout_height = "30dp",
            layout_width = "match_parent",
            background = "0x00000000",
            {
              TextView,
              layout_height = "match_parent",
              gravity = "center",
              paddingLeft = "13dp",
              text = "待添加",
              textColor = "#ffffff"
            },
            {
              Switch,
              id = "内存防封",
              layout_height = "match_parent",
              gravity = "center",
              layout_gravity = "right"
            }
          },
          {
            CardView,
            layout_height = "30dp",
            layout_width = "match_parent",
            background = "0x00000000",
            {
              TextView,
              layout_height = "match_parent",
              gravity = "center",
              paddingLeft = "13dp",
              text = "待添加",
              textColor = "#ffffff"
            },
            {
              Switch,
              id = "防止隔离",
              layout_height = "match_parent",
              gravity = "center",
              layout_gravity = "right"
            }
          },
          {
            TextView,
            layout_height = "match_parent",
            layout_gravity = "left",
            paddingLeft = "13dp",
            text = "待添加",
            textColor = "#2ec4b6",
            textSize = "13sp",
            layout_marginTop = "5dp"
          },
          {
            CardView,
            layout_marginTop = "3dp",
            layout_width = "fill",
            layout_height = "1dp",
            CardBackgroundColor = "#ffffff"
          },
          {
            CardView,
            layout_height = "30dp",
            layout_width = "match_parent",
            background = "0x00000000",
            {
              TextView,
              layout_height = "match_parent",
              gravity = "center",
              paddingLeft = "13dp",
              text = "待添加",
              textColor = "#ffffff"
            },
            {
              Switch,
              id = "待添加",
              layout_height = "match_parent",
              gravity = "center",
              layout_gravity = "right"
            }
          },
          {
            CardView,
            layout_height = "30dp",
            layout_width = "match_parent",
            background = "0x00000000",
            {
              TextView,
              layout_height = "match_parent",
              gravity = "center",
              paddingLeft = "13dp",
              text = "待添加",
              textColor = "#ffffff"
            },
            {
              Switch,
              id = "通用防闪",
              layout_height = "match_parent",
              gravity = "center",
              layout_gravity = "right"
            }
          },
          {
            CardView,
            layout_height = "30dp",
            layout_width = "match_parent",
            background = "0x00000000",
            {
              TextView,
              layout_height = "match_parent",
              gravity = "center",
              paddingLeft = "13dp",
              text = "待添加",
              textColor = "#ffffff"
            },
            {
              Switch,
              id = "备用防闪",
              layout_height = "match_parent",
              gravity = "center",
              layout_gravity = "right"
            }
          },
          {
            CardView,
            layout_height = "30dp",
            layout_width = "match_parent",
            background = "0x00000000",
            {
              TextView,
              layout_height = "match_parent",
              gravity = "center",
              paddingLeft = "13dp",
              text = "待添加",
              textColor = "#ffffff"
            },
            {
              Switch,
              id = "骁龙855透色",
              layout_height = "match_parent",
              gravity = "center",
              layout_gravity = "right"
            }
          },
          {
            CardView,
            layout_height = "30dp",
            layout_width = "match_parent",
            background = "0x00000000",
            {
              TextView,
              layout_height = "match_parent",
              gravity = "center",
              paddingLeft = "13dp",
              text = "待添加",
              textColor = "#ffffff"
            },
            {
              Switch,
              id = "骁龙845透色",
              layout_height = "match_parent",
              gravity = "center",
              layout_gravity = "right"
            }
          },
          {
            CardView,
            layout_height = "30dp",
            layout_width = "match_parent",
            background = "0x00000000",
            {
              TextView,
              layout_height = "match_parent",
              gravity = "center",
              paddingLeft = "13dp",
              text = "待添加",
              textColor = "#ffffff"
            },
            {
              Switch,
              id = "骁龙835透色",
              layout_height = "match_parent",
              gravity = "center",
              layout_gravity = "right"
            }
          },
          {
            CardView,
            layout_height = "30dp",
            layout_width = "match_parent",
            background = "0x00000000",
            {
              TextView,
              layout_height = "match_parent",
              gravity = "center",
              paddingLeft = "13dp",
              text = "待添加",
              textColor = "#ffffff"
            },
            {
              Switch,
              id = "骁龙710透色",
              layout_height = "match_parent",
              gravity = "center",
              layout_gravity = "right"
            }
          },
          {
            CardView,
            layout_height = "30dp",
            layout_width = "match_parent",
            background = "0x00000000",
            {
              TextView,
              layout_height = "match_parent",
              gravity = "center",
              paddingLeft = "13dp",
              text = "待添加",
              textColor = "#ffffff"
            },
            {
              Switch,
              id = "骁龙660透色",
              layout_height = "match_parent",
              gravity = "center",
              layout_gravity = "right"
            }
          },
          {
            CardView,
            layout_height = "30dp",
            layout_width = "match_parent",
            background = "0x00000000",
            {
              TextView,
              layout_height = "match_parent",
              gravity = "center",
              paddingLeft = "13dp",
              text = "待添加",
              textColor = "#ffffff"
            },
            {
              Switch,
              id = "骁龙625透色",
              layout_height = "match_parent",
              gravity = "center",
              layout_gravity = "right"
            }
          },
          {
            CardView,
            layout_height = "30dp",
            layout_width = "match_parent",
            background = "0x00000000",
            {
              TextView,
              layout_height = "match_parent",
              gravity = "center",
              paddingLeft = "13dp",
              text = "待添加",
              textColor = "#ffffff"
            },
            {
              Switch,
              id = "麒麟990透色",
              layout_height = "match_parent",
              gravity = "center",
              layout_gravity = "right"
            }
          },
          {
            CardView,
            layout_height = "30dp",
            layout_width = "match_parent",
            background = "0x00000000",
            {
              TextView,
              layout_height = "match_parent",
              gravity = "center",
              paddingLeft = "13dp",
              text = "待添加",
              textColor = "#ffffff"
            },
            {
              Switch,
              id = "麒麟980透色",
              layout_height = "match_parent",
              gravity = "center",
              layout_gravity = "right"
            }
          },
          {
            CardView,
            layout_height = "30dp",
            layout_width = "match_parent",
            background = "0x00000000",
            {
              TextView,
              layout_height = "match_parent",
              gravity = "center",
              paddingLeft = "13dp",
              text = "待添加",
              textColor = "#ffffff"
            },
            {
              Switch,
              id = "麒麟970透色",
              layout_height = "match_parent",
              gravity = "center",
              layout_gravity = "right"
            }
          },
          {
            CardView,
            layout_height = "30dp",
            layout_width = "match_parent",
            background = "0x00000000",
            {
              TextView,
              layout_height = "match_parent",
              gravity = "center",
              paddingLeft = "13dp",
              text = "待添加",
              textColor = "#ffffff"
            },
            {
              Switch,
              id = "麒麟810透色",
              layout_height = "match_parent",
              gravity = "center",
              layout_gravity = "right"
            }
          },
          {
            CardView,
            layout_height = "30dp",
            layout_width = "match_parent",
            background = "0x00000000",
            {
              TextView,
              layout_height = "match_parent",
              gravity = "center",
              paddingLeft = "13dp",
              text = "待添加",
              textColor = "#ffffff"
            },
            {
              Switch,
              id = "麒麟710透色",
              layout_height = "match_parent",
              gravity = "center",
              layout_gravity = "right"
            }
          },
          {
            CardView,
            layout_height = "30dp",
            layout_width = "match_parent",
            background = "0x00000000",
            {
              TextView,
              layout_height = "match_parent",
              gravity = "center",
              paddingLeft = "13dp",
              text = "待添加",
              textColor = "#ffffff"
            },
            {
              Switch,
              id = "联发科P90透色",
              layout_height = "match_parent",
              gravity = "center",
              layout_gravity = "right"
            }
          },
          {
            CardView,
            layout_height = "30dp",
            layout_width = "match_parent",
            background = "0x00000000",
            {
              TextView,
              layout_height = "match_parent",
              gravity = "center",
              paddingLeft = "13dp",
              text = "待添加",
              textColor = "#ffffff"
            },
            {
              Switch,
              id = "联发科P70透色",
              layout_height = "match_parent",
              gravity = "center",
              layout_gravity = "right"
            }
          },
          {
            CardView,
            layout_height = "30dp",
            layout_width = "match_parent",
            background = "0x00000000",
            {
              TextView,
              layout_height = "match_parent",
              gravity = "center",
              paddingLeft = "13dp",
              text = "待添加",
              textColor = "#ffffff"
            },
            {
              Switch,
              id = "联发科P60透色",
              layout_height = "match_parent",
              gravity = "center",
              layout_gravity = "right"
            }
          },
          {
            TextView,
            layout_height = "match_parent",
            layout_gravity = "left",
            paddingLeft = "13dp",
            text = "待添加)",
            textColor = "#2ec4b6",
            textSize = "13sp",
            layout_marginTop = "5dp"
          },
          {
            CardView,
            layout_marginTop = "3dp",
            layout_width = "fill",
            layout_height = "1dp",
            CardBackgroundColor = "#ffffff"
          },
          {
            CardView,
            layout_height = "30dp",
            layout_width = "match_parent",
            background = "0x00000000",
            {
              TextView,
              layout_height = "match_parent",
              gravity = "center",
              layout_marginLeft = "13dp",
              text = "待添加",
              textColor = "#efdc05"
            },
            {
              Switch,
              id = "美化金色玛莎拉蒂",
              layout_height = "match_parent",
              gravity = "center",
              layout_gravity = "right"
            }
          },
          {
            CardView,
            layout_height = "30dp",
            layout_width = "match_parent",
            background = "0x00000000",
            {
              TextView,
              layout_height = "match_parent",
              gravity = "center",
              layout_marginLeft = "13dp",
              text = "待添加",
              textColor = "#f7aa97"
            },
            {
              Switch,
              id = "美化粉色玛莎拉蒂",
              layout_height = "match_parent",
              gravity = "center",
              layout_gravity = "right"
            }
          },
          {
            CardView,
            layout_height = "30dp",
            layout_width = "match_parent",
            background = "0x00000000",
            {
              TextView,
              layout_height = "match_parent",
              gravity = "center",
              layout_marginLeft = "13dp",
              text = "待添加",
              textColor = "#30A9DE"
            },
            {
              Switch,
              id = "美化蓝色玛莎拉蒂",
              layout_height = "match_parent",
              gravity = "center",
              layout_gravity = "right"
            }
          },
          {
            CardView,
            layout_height = "30dp",
            layout_width = "match_parent",
            background = "0x00000000",
            {
              TextView,
              layout_height = "match_parent",
              gravity = "center",
              layout_marginLeft = "13dp",
              text = "待添加",
              textColor = "#ffffff"
            },
            {
              Switch,
              id = "美化龙腾战甲",
              layout_height = "match_parent",
              gravity = "center",
              layout_gravity = "right"
            }
          },
          {
            CardView,
            layout_height = "30dp",
            layout_width = "match_parent",
            background = "0x00000000",
            {
              TextView,
              layout_height = "match_parent",
              gravity = "center",
              layout_marginLeft = "13dp",
              text = "待添加",
              textColor = "#ffffff"
            },
            {
              Switch,
              id = "美化木乃伊",
              layout_height = "match_parent",
              gravity = "center",
              layout_gravity = "right"
            }
          },
          {
            CardView,
            layout_height = "30dp",
            layout_width = "match_parent",
            background = "0x00000000",
            {
              TextView,
              layout_height = "match_parent",
              gravity = "center",
              layout_marginLeft = "13dp",
              text = "待添加",
              textColor = "#ffffff"
            },
            {
              Switch,
              id = "美化战神套装",
              layout_height = "match_parent",
              gravity = "center",
              layout_gravity = "right"
            }
          },
          {
            CardView,
            layout_height = "30dp",
            layout_width = "match_parent",
            background = "0x00000000",
            {
              TextView,
              layout_height = "match_parent",
              gravity = "center",
              layout_marginLeft = "13dp",
              text = "美化蜘蛛套装",
              textColor = "#ffffff"
            },
            {
              Switch,
              id = "美化蜘蛛套装",
              layout_height = "match_parent",
              gravity = "center",
              layout_gravity = "right"
            }
          },
          {
            CardView,
            layout_height = "30dp",
            layout_width = "match_parent",
            background = "0x00000000",
            {
              TextView,
              layout_height = "match_parent",
              gravity = "center",
              layout_marginLeft = "13dp",
              text = "美化杀手套装",
              textColor = "#ffffff"
            },
            {
              Switch,
              id = "美化杀手套装",
              layout_height = "match_parent",
              gravity = "center",
              layout_gravity = "right"
            }
          },
          {
            CardView,
            layout_height = "30dp",
            layout_width = "match_parent",
            background = "0x00000000",
            {
              TextView,
              layout_height = "match_parent",
              gravity = "center",
              layout_marginLeft = "13dp",
              text = "美化人物头盔",
              textColor = "#ffffff"
            },
            {
              Switch,
              id = "美化人物头盔",
              layout_height = "match_parent",
              gravity = "center",
              layout_gravity = "right"
            }
          },
          {
            CardView,
            layout_height = "30dp",
            layout_width = "match_parent",
            background = "0x00000000",
            {
              TextView,
              layout_height = "match_parent",
              gravity = "center",
              layout_marginLeft = "13dp",
              text = "美化人物背包",
              textColor = "#ffffff"
            },
            {
              Switch,
              id = "美化人物背包",
              layout_height = "match_parent",
              gravity = "center",
              layout_gravity = "right"
            }
          },
          {
            TextView,
            layout_height = "match_parent",
            layout_gravity = "left",
            paddingLeft = "13dp",
            text = "其他变态功能",
            textColor = "#2ec4b6",
            textSize = "13sp",
            layout_marginTop = "5dp"
          },
          {
            CardView,
            layout_marginTop = "3dp",
            layout_width = "fill",
            layout_height = "1dp",
            CardBackgroundColor = "#ffffff"
          },
          {
            CardView,
            layout_height = "50dp",
            layout_width = "match_parent",
            background = "0x00000000",
            {
              TextView,
              layout_height = "match_parent",
              gravity = "center",
              layout_marginLeft = "13dp",
              text = "全枪子弹聚点",
              textColor = "#ffffff"
            },
            {
              TextView,
              layout_height = "match_parent",
              layout_marginTop = "30dp",
              gravity = "center",
              layout_marginLeft = "13dp",
              text = "持枪开启换枪关闭重开下游戏关闭",
              textSize = "10sp",
              textColor = "#a8a8a8"
            },
            {
              Switch,
              id = "全枪子弹聚点",
              layout_height = "match_parent",
              gravity = "center",
              layout_gravity = "right"
            }
          },
          {
            CardView,
            layout_height = "30dp",
            layout_width = "match_parent",
            background = "0x00000000",
            {
              TextView,
              layout_height = "match_parent",
              gravity = "center",
              paddingLeft = "13dp",
              text = "大厅全枪防抖",
              textColor = "#ffffff"
            },
            {
              Switch,
              id = "大厅全枪防抖",
              layout_height = "match_parent",
              gravity = "center",
              layout_gravity = "right"
            }
          },
          {
            CardView,
            layout_height = "30dp",
            layout_width = "match_parent",
            background = "0x00000000",
            {
              TextView,
              layout_height = "match_parent",
              gravity = "center",
              paddingLeft = "13dp",
              text = "大厅胳膊防抖",
              textColor = "#ffffff"
            },
            {
              Switch,
              id = "大厅胳膊防抖",
              layout_height = "match_parent",
              gravity = "center",
              layout_gravity = "right"
            }
          },
          {
            CardView,
            layout_height = "30dp",
            layout_width = "match_parent",
            background = "0x00000000",
            {
              TextView,
              layout_height = "match_parent",
              gravity = "center",
              paddingLeft = "13dp",
              text = "全枪子弹瞬击",
              textColor = "#ffffff"
            },
            {
              Switch,
              id = "全枪子弹瞬击",
              layout_height = "match_parent",
              gravity = "center",
              layout_gravity = "right"
            }
          },
          {
            CardView,
            layout_height = "30dp",
            layout_width = "match_parent",
            background = "0x00000000",
            {
              TextView,
              layout_height = "match_parent",
              gravity = "center",
              paddingLeft = "13dp",
              text = "大厅全图除草",
              textColor = "#ffffff"
            },
            {
              Switch,
              id = "大厅全图除草",
              layout_height = "match_parent",
              gravity = "center",
              layout_gravity = "right"
            }
          },
          {
            CardView,
            layout_height = "30dp",
            layout_width = "match_parent",
            background = "0x00000000",
            {
              TextView,
              layout_height = "match_parent",
              gravity = "center",
              paddingLeft = "13dp",
              text = "枪械超级范围",
              textColor = "#ffffff"
            },
            {
              Switch,
              id = "枪械超级范围",
              layout_height = "match_parent",
              gravity = "center",
              layout_gravity = "right"
            }
          },
          {
            CardView,
            layout_height = "30dp",
            layout_width = "match_parent",
            background = "0x00000000",
            {
              TextView,
              layout_height = "match_parent",
              gravity = "center",
              paddingLeft = "13dp",
              text = "吉普车加速",
              textColor = "#ffffff"
            },
            {
              Switch,
              id = "吉普车加速",
              layout_height = "match_parent",
              gravity = "center",
              layout_gravity = "right"
            }
          },
          {
            CardView,
            layout_height = "30dp",
            layout_width = "match_parent",
            background = "0x00000000",
            {
              TextView,
              layout_height = "match_parent",
              gravity = "center",
              paddingLeft = "13dp",
              text = "飞机上秒落地",
              textColor = "#ffffff"
            },
            {
              Switch,
              id = "飞机上秒落地",
              layout_height = "match_parent",
              gravity = "center",
              layout_gravity = "right"
            }
          },
          {
            CardView,
            layout_height = "30dp",
            layout_width = "match_parent",
            background = "0x00000000",
            {
              TextView,
              layout_height = "match_parent",
              gravity = "center",
              paddingLeft = "13dp",
              text = "全图物品透视",
              textColor = "#ffffff"
            },
            {
              Switch,
              id = "全图物品透视",
              layout_height = "match_parent",
              gravity = "center",
              layout_gravity = "right"
            }
          },
          {
            CardView,
            layout_height = "30dp",
            layout_width = "match_parent",
            background = "0x00000000",
            {
              TextView,
              layout_height = "match_parent",
              gravity = "center",
              paddingLeft = "13dp",
              text = "全图三级定位",
              textColor = "#ffffff"
            },
            {
              Switch,
              id = "全图三级定位",
              layout_height = "match_parent",
              gravity = "center",
              layout_gravity = "right"
            }
          }
        }
      },
      {
        LuaWebView,
        layout_width = 1,
        id = "web",
        layout_height = 1
      }
    }
  }
}
activity.setContentView(loadlayout(layout))

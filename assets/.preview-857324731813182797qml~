/* Copyright (c) 2012 Research In Motion Limited.
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
* http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/
import bb.cascades 1.0
import "common"

Page {
    content: MenuContainer {

	    id: writeCustom
	    objectName: "writeCustom"
	    signal writeCustomRequested()

        Container {
            layout: StackLayout {
            }

            topPadding: 10
            leftPadding: 30
            rightPadding: 30

            Label {
                text: "Register Employee"
                textStyle {
                    base: SystemDefaults.TextStyles.BigText
                    color: Color.LightGray
                    fontWeight: FontWeight.Bold
                }
            }

		    Label {
		        text: "Enter employee name:"
		        textStyle {
		            base: SystemDefaults.TextStyles.BodyText
		            color: Color.LightGray
		            lineHeight: 1.1
		        }
		    }
		
		    TextArea {
		        id: txf_domain
		        objectName: "txf_domain"
		        hintText: "Enter employee name"
		        text: _writeCustMenu._domain
		        textStyle {
		            base: SystemDefaults.TextStyles.BodyText
		        }
		    }
		    
		    Label {
		        text: "Enter employee number:"
		        textStyle {
		            base: SystemDefaults.TextStyles.BodyText
		            color: Color.LightGray
		            lineHeight: 1.1
		        }
		    }
		
		    TextArea {
		        id: txf_type
		        objectName: "txf_type"
		        hintText: "Enter employee number"
		        text: _writeCustMenu._type
		        textStyle {
		            base: SystemDefaults.TextStyles.BodyText
		        }
		    }
		    
		    Label {
		        text: "Enter employee position:"
		        textStyle {
		            base: SystemDefaults.TextStyles.BodyText
		            color: Color.LightGray
		            lineHeight: 1.1
		        }
		    }
		
		    TextArea {
		        id: txf_content
		        objectName: "txf_content"
		        hintText: "Enter employee position"
		        text: _writeCustMenu._content
		        textStyle {
		            base: SystemDefaults.TextStyles.BodyText
		        }
		    }
        }
	}
	
	actions: [
	    ActionItem {
	        id: write_custom_action
	        title: "Submit"
	        imageSource: "images/write.png"
	        ActionBar.placement: ActionBarPlacement.OnBar
	        onTriggered: {
	            console.log("Write Custom Triggered");
	            writeCustom.writeCustomRequested();
	        }
	    }
	]
}

//
//  ToolCommandHistoryView.h
//  iTerm
//
//  Created by George Nachman on 1/15/14.
//
//

#import <Cocoa/Cocoa.h>
#import "ToolbeltView.h"

@interface ToolCommandHistoryView : NSView <ToolbeltTool, NSTableViewDataSource, NSTableViewDelegate>

- (id)initWithFrame:(NSRect)frame;
- (void)shutdown;


@end

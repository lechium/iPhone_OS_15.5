//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WebInspector/RWIProtocolCSSSourceRange.h>

@interface RWIProtocolCSSSourceRange (IKJSInspector)
+ (id)ik_cssSourceRangeForRange:(struct _NSRange)arg1 withNewLineIndexSet:(id)arg2;	// IMP=0x0000000000016f3e
+ (id)ik_emptySourceRange;	// IMP=0x0000000000016f1b
+ (id)ik_newLineIndexSetForStyleMarkup:(id)arg1;	// IMP=0x0000000000016dbd
+ (id)safe_initWithStartLine:(int)arg1 startColumn:(int)arg2 endLine:(int)arg3 endColumn:(int)arg4;	// IMP=0x00000000000d0e04
- (struct _NSRange)ik_rangeWithNewLineIndexSet:(id)arg1;	// IMP=0x000000000001702c
@end

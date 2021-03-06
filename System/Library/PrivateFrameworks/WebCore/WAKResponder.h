//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface WAKResponder : NSObject
{
}

- (_Bool)tryToPerform:(SEL)arg1 with:(id)arg2;	// IMP=0x0000000002354270
- (_Bool)resignFirstResponder;	// IMP=0x0000000002354260
- (_Bool)becomeFirstResponder;	// IMP=0x0000000002354250
- (_Bool)acceptsFirstResponder;	// IMP=0x0000000002354240
- (void)mouseDown:(id)arg1;	// IMP=0x0000000002354220
- (void)mouseUp:(id)arg1;	// IMP=0x0000000002354200
- (void)moveUpAndModifySelection:(id)arg1;	// IMP=0x00000000023541f0
- (void)moveUp:(id)arg1;	// IMP=0x00000000023541e0
- (void)moveRightAndModifySelection:(id)arg1;	// IMP=0x00000000023541d0
- (void)moveRight:(id)arg1;	// IMP=0x00000000023541c0
- (void)moveLeftAndModifySelection:(id)arg1;	// IMP=0x00000000023541b0
- (void)moveLeft:(id)arg1;	// IMP=0x00000000023541a0
- (void)moveDownAndModifySelection:(id)arg1;	// IMP=0x0000000002354190
- (void)moveDown:(id)arg1;	// IMP=0x0000000002354180
- (void)insertParagraphSeparator:(id)arg1;	// IMP=0x0000000002354170
- (void)deleteForward:(id)arg1;	// IMP=0x0000000002354160
- (void)deleteBackward:(id)arg1;	// IMP=0x0000000002354150
- (void)insertText:(id)arg1;	// IMP=0x0000000002354140
- (id)nextResponder;	// IMP=0x0000000002354130
- (void)touch:(id)arg1;	// IMP=0x0000000002354110
- (void)keyUp:(id)arg1;	// IMP=0x00000000023540f0
- (void)keyDown:(id)arg1;	// IMP=0x00000000023540d0
- (void)mouseMoved:(id)arg1;	// IMP=0x00000000023540b0
- (void)mouseExited:(id)arg1;	// IMP=0x0000000002354090
- (void)mouseEntered:(id)arg1;	// IMP=0x0000000002354070
- (void)scrollWheel:(id)arg1;	// IMP=0x0000000002354050
- (void)_forwardEvent:(id)arg1;	// IMP=0x0000000002354010
- (void)handleEvent:(id)arg1;	// IMP=0x0000000002354000

@end


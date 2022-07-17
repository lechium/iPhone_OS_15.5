//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PencilKit/NSObject-Protocol.h>

@class PKTextInputHandwritingController;
@protocol PKTextInputSupportedElementDelegate;

@protocol PKTextInputHandwritingControllerDelegate <NSObject>
- (void)handwritingControllerStrokeAlphaOverrideDidChange:(PKTextInputHandwritingController *)arg1;
- (id <PKTextInputSupportedElementDelegate>)supportedElementDelegateForHandwritingController:(PKTextInputHandwritingController *)arg1;
- (void)handwritingControllerDidFinishActiveCommands:(PKTextInputHandwritingController *)arg1;
- (void)handwritingControllerWritingStateDidChange:(PKTextInputHandwritingController *)arg1;
@end

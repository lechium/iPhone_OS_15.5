//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUI/NSObject-Protocol.h>

@class NSString, PUPreviewActionController;

@protocol PUPreviewActionControllerDelegate <NSObject>

@optional
- (_Bool)previewActionControllerPreventRevealInMomentAction:(PUPreviewActionController *)arg1;
- (void)previewActionController:(PUPreviewActionController *)arg1 didDismissWithActionIdentifier:(NSString *)arg2;
@end


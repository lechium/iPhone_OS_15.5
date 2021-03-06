//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUI/NSObject-Protocol.h>

@class PHAdjustmentData, PHContentEditingInput, UIImage;

@protocol PHContentEditingController <NSObject>
@property(readonly, nonatomic) _Bool shouldShowCancelConfirmation;
- (void)cancelContentEditing;
- (void)finishContentEditingWithCompletionHandler:(void (^)(PHContentEditingOutput *))arg1;
- (void)startContentEditingWithInput:(PHContentEditingInput *)arg1 placeholderImage:(UIImage *)arg2;
- (_Bool)canHandleAdjustmentData:(PHAdjustmentData *)arg1;
@end


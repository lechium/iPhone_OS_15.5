//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol PKPencilTouchDetectionDelegate;

@interface PKPencilTouchDetection : NSObject
{
    id <PKPencilTouchDetectionDelegate> _delegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000cd350
@property(nonatomic) __weak id <PKPencilTouchDetectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)pencilType:(long long)arg1 hasRecentlyBeenUsedWithCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000cd313
- (void)didUpdateWithUserInfo:(id)arg1;	// IMP=0x00000000000cd15a
- (void)dealloc;	// IMP=0x00000000000cd110
- (id)init;	// IMP=0x00000000000cd095

@end

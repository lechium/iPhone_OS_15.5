//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCountedSet, NSMutableSet;
@protocol WBSTranslationErrorControllerDelegate;

@interface WBSTranslationErrorController : NSObject
{
    NSCountedSet *_errorCounter;	// 8 = 0x8
    NSMutableSet *_errorKeysReachingThreshold;	// 16 = 0x10
    id <WBSTranslationErrorControllerDelegate> _delegate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000138c28
@property(nonatomic) __weak id <WBSTranslationErrorControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_overriddenThresholdForError:(id)arg1;	// IMP=0x0000000000138ba6
- (void)invalidate;	// IMP=0x0000000000138b6b
- (void)addError:(id)arg1;	// IMP=0x000000000013898b
- (id)init;	// IMP=0x00000000001388dc

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FAFamilyCircle, NSDictionary, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface FAProfilePictureStore : NSObject
{
    FAFamilyCircle *_familyCircle;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_serialQueue;	// 16 = 0x10
    NSMutableDictionary *_profileImages;	// 24 = 0x18
}

+ (double)screenScale;	// IMP=0x000000000002b741
+ (id)_dataForImage:(id)arg1;	// IMP=0x000000000002b6bf
+ (id)profilePictureForContact:(id)arg1 serverImageData:(id)arg2 firstName:(id)arg3 lastName:(id)arg4 diameter:(double)arg5;	// IMP=0x000000000002b3da
- (void).cxx_destruct;	// IMP=0x000000000002c696
- (id)resizedPictureWithData:(id)arg1 diameter:(double)arg2;	// IMP=0x000000000002c61e
- (id)profilePictureForFamilyMember:(id)arg1 pictureDiameter:(double)arg2;	// IMP=0x000000000002c5b5
- (id)profilePictureForFamilyMemberWithAltDSID:(id)arg1 pictureDiameter:(double)arg2;	// IMP=0x000000000002c3b4
- (id)profilePicturesWithDiameter:(double)arg1;	// IMP=0x000000000002bf04
- (void)fetchProfileImagesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000002b798
- (void)dealloc;	// IMP=0x000000000002b6cc
- (id)profilePictureForFamilyMember:(id)arg1;	// IMP=0x000000000002b2ab
@property(readonly, copy, nonatomic) NSDictionary *profileImages;
@property(retain, nonatomic) FAFamilyCircle *familyCircle;
- (void)_postReloadNotification;	// IMP=0x000000000002b0c4
- (void)_traitCollectionDidChange:(id)arg1;	// IMP=0x000000000002b0b2
- (id)initWithFamilyCircle:(id)arg1;	// IMP=0x000000000002af57

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PXActivityUtilities : NSObject
{
}

+ (id)_initialsFromFirstName:(id)arg1 lastName:(id)arg2;	// IMP=0x00000000001caab4
+ (id)textForDate:(id)arg1;	// IMP=0x00000000001caa2d
+ (void)requestPersonImageWithTargetSize:(struct CGSize)arg1 displayScale:(double)arg2 isRTL:(_Bool)arg3 matchingEmail:(id)arg4 orPhone:(id)arg5 withFirstName:(id)arg6 lastName:(id)arg7 prefersPhotosImage:(_Bool)arg8 withCompletion:(CDUnknownBlockType)arg9;	// IMP=0x00000000001ca7fd
+ (void)_requestPlaceholderMonogramWithTargetSize:(struct CGSize)arg1 displayScale:(double)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001ca709
+ (void)_requestMonogramForFirstName:(id)arg1 lastName:(id)arg2 targetSize:(struct CGSize)arg3 displayScale:(double)arg4 isRTL:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00000000001ca498
+ (void)requestImageForContact:(id)arg1 targetSize:(struct CGSize)arg2 displayScale:(double)arg3 isRTL:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000000001ca293
+ (void)_requestImageForContact:(id)arg1 targetSize:(struct CGSize)arg2 displayScale:(double)arg3 isRTL:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000000001c9fe0
+ (void)requestImageFromPeopleAlbumForPerson:(id)arg1 targetSize:(struct CGSize)arg2 displayScale:(double)arg3 highQualityFormat:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000000001c9cd2
+ (void)_requestContactMatchingEmail:(id)arg1 orPhone:(id)arg2 withFirstName:(id)arg3 lastName:(id)arg4 keysToFetch:(id)arg5 withCompletion:(CDUnknownBlockType)arg6;	// IMP=0x00000000001c92df
+ (void)requestMeContactWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000001c91c0
+ (id)sharedWorkQueue;	// IMP=0x00000000001c9190

@end


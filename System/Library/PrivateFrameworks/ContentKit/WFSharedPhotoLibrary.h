//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContentKit/PHPhotoLibraryAvailabilityObserver-Protocol.h>

@class NSString, PHPhotoLibrary;

@interface WFSharedPhotoLibrary : NSObject <PHPhotoLibraryAvailabilityObserver>
{
    PHPhotoLibrary *_systemPhotoLibrary;	// 8 = 0x8
}

+ (id)sharedLibrary;	// IMP=0x000000000005be0f
- (void).cxx_destruct;	// IMP=0x000000000005bb58
@property(retain, nonatomic) PHPhotoLibrary *systemPhotoLibrary; // @synthesize systemPhotoLibrary=_systemPhotoLibrary;
- (void)photoLibraryDidBecomeUnavailable:(id)arg1;	// IMP=0x000000000005ba82
- (id)fetchOptionsWithError:(id *)arg1;	// IMP=0x000000000005ba32
- (id)systemPhotoLibraryWithError:(id *)arg1;	// IMP=0x000000000005b884

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


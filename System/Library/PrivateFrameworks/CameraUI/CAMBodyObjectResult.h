//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CameraUI/CAMMetadataObjectResult-Protocol.h>

@class AVMetadataBodyObject, AVMetadataObject, NSString;

@interface CAMBodyObjectResult : NSObject <CAMMetadataObjectResult>
{
    NSString *_uniqueIdentifier;	// 8 = 0x8
    AVMetadataBodyObject *__metadataBodyObject;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001c869d
@property(retain, nonatomic) AVMetadataBodyObject *_metadataBodyObject; // @synthesize _metadataBodyObject=__metadataBodyObject;
@property(readonly, copy, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(readonly, nonatomic) unsigned long long syntheticFocusMode;
@property(readonly, copy, nonatomic) NSString *metadataType;
@property(readonly, nonatomic) AVMetadataObject *underlyingMetadataObject;
@property(readonly, copy) NSString *description;
- (id)initWithBodyObject:(id)arg1;	// IMP=0x00000000001c83c5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


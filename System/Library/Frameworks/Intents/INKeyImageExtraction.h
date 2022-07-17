//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Intents/INImageStoring-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class INImage, NSDictionary, NSMutableDictionary, NSString;

@interface INKeyImageExtraction : NSObject <INImageStoring, NSSecureCoding>
{
    NSMutableDictionary *_keyImagesByType;	// 8 = 0x8
    long long _imageTypeToStore;	// 16 = 0x10
    NSString *_proxyIdentifier;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000005967
- (void).cxx_destruct;	// IMP=0x000000000000593f
@property(copy, nonatomic) NSDictionary *keyImagesByType; // @synthesize keyImagesByType=_keyImagesByType;
@property(copy, nonatomic) NSString *proxyIdentifier; // @synthesize proxyIdentifier=_proxyIdentifier;
@property(nonatomic, setter=_setImageTypeToStore:) long long _imageTypeToStore; // @synthesize _imageTypeToStore;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000005855
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000005637
@property(readonly, nonatomic) unsigned long long servicePriority;
@property(readonly, nonatomic) NSString *serviceIdentifier;
- (id)retrieveImageSynchronouslyForIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000005440
- (id)storeImageSynchronously:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000531e
- (void)purgeImageWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000005146
- (void)retrieveImageWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000050b0
- (id)storeImage:(id)arg1 scaled:(_Bool)arg2 qualityOfService:(unsigned int)arg3 storeType:(unsigned long long)arg4 error:(id *)arg5;	// IMP=0x000000000000509a
- (_Bool)canStoreImage:(id)arg1;	// IMP=0x000000000000508e
@property(copy, nonatomic) INImage *keyImage;
- (id)init;	// IMP=0x0000000000004f5c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

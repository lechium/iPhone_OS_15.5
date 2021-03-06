//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NanoTimeKitCompanion/NSCopying-Protocol.h>
#import <NanoTimeKitCompanion/NSSecureCoding-Protocol.h>

@class NSData, NSString, NSUUID;

@interface NTKFaceInstanceDescriptor : NSObject <NSSecureCoding, NSCopying>
{
    NSData *_faceJSONRepresentation;	// 8 = 0x8
    NSUUID *_nrDeviceUUID;	// 16 = 0x10
    NSString *_resourceDirectory;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000290da
- (void).cxx_destruct;	// IMP=0x00000000000292db
@property(readonly, nonatomic) NSString *resourceDirectory; // @synthesize resourceDirectory=_resourceDirectory;
@property(readonly, nonatomic) NSUUID *nrDeviceUUID; // @synthesize nrDeviceUUID=_nrDeviceUUID;
@property(readonly, nonatomic) NSData *faceJSONRepresentation; // @synthesize faceJSONRepresentation=_faceJSONRepresentation;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000291c5
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000290e2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000290cf
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000028f2c
- (unsigned long long)hash;	// IMP=0x0000000000028e65
- (id)initWithJSONRepresentation:(id)arg1 nrDeviceUUID:(id)arg2 resourceDirectory:(id)arg3;	// IMP=0x0000000000028d8d

@end


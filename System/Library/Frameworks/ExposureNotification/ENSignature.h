//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ExposureNotification/CUXPCCodable-Protocol.h>

@class NSData, NSString;

@interface ENSignature : NSObject <CUXPCCodable>
{
    unsigned int _batchNumber;	// 8 = 0x8
    unsigned int _batchCount;	// 12 = 0xc
    NSString *_appleBundleID;	// 16 = 0x10
    NSString *_androidBundleID;	// 24 = 0x18
    NSString *_keyID;	// 32 = 0x20
    NSString *_keyVersion;	// 40 = 0x28
    NSString *_signatureAlgorithm;	// 48 = 0x30
    NSData *_signatureData;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000001b670
@property(copy, nonatomic) NSData *signatureData; // @synthesize signatureData=_signatureData;
@property(copy, nonatomic) NSString *signatureAlgorithm; // @synthesize signatureAlgorithm=_signatureAlgorithm;
@property(copy, nonatomic) NSString *keyVersion; // @synthesize keyVersion=_keyVersion;
@property(copy, nonatomic) NSString *keyID; // @synthesize keyID=_keyID;
@property(nonatomic) unsigned int batchCount; // @synthesize batchCount=_batchCount;
@property(nonatomic) unsigned int batchNumber; // @synthesize batchNumber=_batchNumber;
@property(copy, nonatomic) NSString *androidBundleID; // @synthesize androidBundleID=_androidBundleID;
@property(copy, nonatomic) NSString *appleBundleID; // @synthesize appleBundleID=_appleBundleID;
- (id)description;	// IMP=0x000000000001b47d
- (void)encodeWithXPCObject:(id)arg1;	// IMP=0x000000000001b24a
- (id)initWithXPCObject:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001b05d
- (_Bool)_encodeInfoWithProtobufCoder:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001aef7
- (_Bool)encodeWithProtobufCoder:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001ad6a
- (_Bool)_readSignatureInfoPtr:(const char *)arg1 length:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x000000000001a916
- (id)initWithBytes:(const char *)arg1 length:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x000000000001a42f

@end


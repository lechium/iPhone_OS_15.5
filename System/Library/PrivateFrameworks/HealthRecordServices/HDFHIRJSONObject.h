//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthRecordServices/NSCopying-Protocol.h>
#import <HealthRecordServices/NSSecureCoding-Protocol.h>

@class HKFHIRVersion, NSData, NSDictionary, NSString, NSURL;

@interface HDFHIRJSONObject : NSObject <NSSecureCoding, NSCopying>
{
    NSDictionary *_JSONObject;	// 8 = 0x8
    HKFHIRVersion *_FHIRVersion;	// 16 = 0x10
    NSURL *_sourceURL;	// 24 = 0x18
}

+ (id)resourceTypeOfJSONObject:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001ddda
+ (id)objectWithResourceData:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001dcfd
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001d7e1
+ (id)_dataFromJSONObject:(id)arg1 JSONOptions:(unsigned long long)arg2;	// IMP=0x000000000001d675
- (void).cxx_destruct;	// IMP=0x000000000001df30
@property(readonly, copy, nonatomic) NSURL *sourceURL; // @synthesize sourceURL=_sourceURL;
@property(readonly, copy, nonatomic) HKFHIRVersion *FHIRVersion; // @synthesize FHIRVersion=_FHIRVersion;
@property(readonly, copy, nonatomic) NSDictionary *JSONObject; // @synthesize JSONObject=_JSONObject;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001da90
- (unsigned long long)hash;	// IMP=0x000000000001da36
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001da2b
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001d8e2
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001d7e9
@property(readonly, copy, nonatomic) NSString *sourceString;
@property(readonly, copy, nonatomic) NSData *data;
- (id)_dataWithJSONOptions:(unsigned long long)arg1;	// IMP=0x000000000001d70c
@property(readonly, copy, nonatomic) NSString *detectedResourceType;
- (id)initWithJSONObject:(id)arg1 sourceURL:(id)arg2 FHIRVersion:(id)arg3;	// IMP=0x000000000001d570

@end


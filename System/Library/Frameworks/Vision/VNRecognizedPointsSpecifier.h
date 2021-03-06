//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Vision/NSCopying-Protocol.h>
#import <Vision/NSSecureCoding-Protocol.h>

@class NSDictionary, VNRequestSpecifier;

__attribute__((visibility("hidden")))
@interface VNRecognizedPointsSpecifier : NSObject <NSSecureCoding, NSCopying>
{
    VNRequestSpecifier *_originatingRequestSpecifier;	// 8 = 0x8
    NSDictionary *_allRecognizedPoints;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000017b398
- (void).cxx_destruct;	// IMP=0x000000000017b370
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000017b365
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000017b1ea
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000017b17c
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000017b09b
- (unsigned long long)hash;	// IMP=0x000000000017b058
- (id)recognizedPointForKey:(id)arg1 error:(id *)arg2;	// IMP=0x000000000017af72
- (id)recognizedPointsForGroupKey:(id)arg1 error:(id *)arg2;	// IMP=0x000000000017acac
- (id)populatedMLMultiArrayAndReturnError:(id *)arg1;	// IMP=0x000000000017ac68
- (id)pointKeyGroupLabelsMapping;	// IMP=0x000000000017ac3e
- (id)availableGroupKeys;	// IMP=0x000000000017ac14
- (id)availableKeys;	// IMP=0x000000000017abfe
- (id)originatingRequestSpecifier;	// IMP=0x000000000017abf0
- (id)initWithOriginatingRequestSpecifier:(id)arg1 allRecognizedPoints:(id)arg2;	// IMP=0x000000000017ab45

@end


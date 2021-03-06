//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SearchFoundation/NSCopying-Protocol.h>
#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/SFProductInventoryResult-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString;

@interface SFProductInventoryResult : NSObject <SFProductInventoryResult, NSSecureCoding, NSCopying>
{
    NSString *_productIdentifier;	// 8 = 0x8
    NSArray *_availability;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001c6f1d
- (void).cxx_destruct;	// IMP=0x00000000001c71e2
@property(copy, nonatomic) NSArray *availability; // @synthesize availability=_availability;
@property(copy, nonatomic) NSString *productIdentifier; // @synthesize productIdentifier=_productIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001c7126
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001c6fd7
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001c6f25
- (id)initWithProtobuf:(id)arg1;	// IMP=0x000000000001c7ac

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


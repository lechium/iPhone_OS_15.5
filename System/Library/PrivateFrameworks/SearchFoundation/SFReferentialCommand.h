//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SearchFoundation/NSCopying-Protocol.h>
#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/SFReferentialCommand-Protocol.h>

@class NSData, NSDictionary, NSString;

@interface SFReferentialCommand : NSObject <SFReferentialCommand, NSSecureCoding, NSCopying>
{
    NSString *_referenceIdentifier;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000189dc5
- (void).cxx_destruct;	// IMP=0x000000000018a04c
@property(copy, nonatomic) NSString *referenceIdentifier; // @synthesize referenceIdentifier=_referenceIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000189fce
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000189e7f
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000189dcd
- (id)initWithProtobuf:(id)arg1;	// IMP=0x000000000002e42a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


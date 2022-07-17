//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, NSURL;

@interface HMAsset : NSObject
{
    NSString *_identifier;	// 8 = 0x8
    NSDictionary *_metadata;	// 16 = 0x10
    NSURL *_resourceURL;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000f2b5a
- (void).cxx_destruct;	// IMP=0x00000000000f2b27
@property(readonly, copy, nonatomic) NSURL *resourceURL; // @synthesize resourceURL=_resourceURL;
@property(readonly, copy, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000f2b03
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000f2a0b
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000f2862
@property(readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
- (id)initWithIdentifier:(id)arg1 metadata:(id)arg2 resourceURL:(id)arg3;	// IMP=0x00000000000f25d4

@end

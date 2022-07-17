//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BiomeStreams/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString;

@interface BMContextualActionContent : NSObject <NSSecureCoding>
{
    NSString *_contentType;	// 8 = 0x8
    NSDictionary *_contentMetadata;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000366d6
- (void).cxx_destruct;	// IMP=0x0000000000036ad3
@property(readonly, nonatomic) NSDictionary *contentMetadata; // @synthesize contentMetadata=_contentMetadata;
@property(readonly, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000368b8
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000003674c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000366de
- (id)initWithType:(id)arg1 metadata:(id)arg2;	// IMP=0x000000000003663d

@end

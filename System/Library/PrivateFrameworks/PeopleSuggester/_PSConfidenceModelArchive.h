//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PeopleSuggester/NSCopying-Protocol.h>
#import <PeopleSuggester/NSSecureCoding-Protocol.h>

@class NSDictionary;

@interface _PSConfidenceModelArchive : NSObject <NSCopying, NSSecureCoding>
{
    NSDictionary *_confidenceModelDictionary;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000c75ae
- (void).cxx_destruct;	// IMP=0x00000000000c77aa
@property(readonly, nonatomic) NSDictionary *confidenceModelDictionary; // @synthesize confidenceModelDictionary=_confidenceModelDictionary;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000c7644
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000c75b6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000c753d
- (id)initWithConfidenceModelDictionary:(id)arg1;	// IMP=0x00000000000c74d2

@end

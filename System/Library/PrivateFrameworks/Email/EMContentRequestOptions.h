//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Email/EMContentRequestOptionsBuilder-Protocol.h>
#import <Email/NSCopying-Protocol.h>
#import <Email/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface EMContentRequestOptions : NSObject <NSSecureCoding, NSCopying, EMContentRequestOptionsBuilder>
{
    _Bool _includeSuggestionItems;	// 8 = 0x8
    _Bool _requestAllHeaders;	// 9 = 0x9
    NSString *_requestedRepresentation;	// 16 = 0x10
    long long _networkUsage;	// 24 = 0x18
    NSArray *_requestedHeaderKeys;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000018760
+ (id)optionsWithRequestedRepresentationType:(id)arg1 networkUsage:(long long)arg2 includeSuggestionItems:(_Bool)arg3;	// IMP=0x00000000000182c2
+ (id)optionsWithRequestedRepresentationType:(id)arg1 networkUsage:(long long)arg2;	// IMP=0x0000000000018296
- (void).cxx_destruct;	// IMP=0x0000000000018c64
@property(copy, nonatomic) NSArray *requestedHeaderKeys; // @synthesize requestedHeaderKeys=_requestedHeaderKeys;
@property(nonatomic) _Bool requestAllHeaders; // @synthesize requestAllHeaders=_requestAllHeaders;
@property(nonatomic) _Bool includeSuggestionItems; // @synthesize includeSuggestionItems=_includeSuggestionItems;
@property(nonatomic) long long networkUsage; // @synthesize networkUsage=_networkUsage;
@property(copy, nonatomic) NSString *requestedRepresentation; // @synthesize requestedRepresentation=_requestedRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000018a62
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001890f
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000018768
- (id)debugDescription;	// IMP=0x000000000001864f
- (id)description;	// IMP=0x000000000001859c
- (id)copyWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x000000000001852d
- (id)init;	// IMP=0x00000000000184a4
- (id)initWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x0000000000018419

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/NSCopying-Protocol.h>
#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/SFOpenAppClipCommand-Protocol.h>

@class NSData, NSDictionary, NSString;

@interface SFOpenAppClipCommand <SFOpenAppClipCommand, NSSecureCoding, NSCopying>
{
    NSString *_clipIdentifier;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001e6a8d
- (void).cxx_destruct;	// IMP=0x00000000001e6a7a
@property(copy, nonatomic) NSString *clipIdentifier; // @synthesize clipIdentifier=_clipIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001e69f3
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001e68a4
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001e67f2
- (id)initWithProtobuf:(id)arg1;	// IMP=0x00000000001dbe2e

// Remaining properties
@property(copy, nonatomic) NSString *commandDetail;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/NSCopying-Protocol.h>
#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/SFShowWrapperResponseViewCommand-Protocol.h>

@class NSData, NSDictionary, NSString, SFCATModel;

@interface SFShowWrapperResponseViewCommand <SFShowWrapperResponseViewCommand, NSSecureCoding, NSCopying>
{
    SFCATModel *_catModel;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000002c4e5
- (void).cxx_destruct;	// IMP=0x000000000002c4d2
@property(retain, nonatomic) SFCATModel *catModel; // @synthesize catModel=_catModel;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002c448
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000002c2f9
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002c247
- (id)initWithProtobuf:(id)arg1;	// IMP=0x00000000001b5935

// Remaining properties
@property(copy, nonatomic) NSString *commandDetail;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


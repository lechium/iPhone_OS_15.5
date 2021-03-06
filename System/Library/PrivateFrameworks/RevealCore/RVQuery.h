//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <RevealCore/NSSecureCoding-Protocol.h>
#import <RevealCore/RVQueryProtocol-Protocol.h>

@class NSString;

@interface RVQuery : NSObject <NSSecureCoding, RVQueryProtocol>
{
    NSString *_title;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
    NSString *_userAgent;	// 24 = 0x18
    long long _queryID;	// 32 = 0x20
    CDUnknownBlockType _queryProvider;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000002994
- (void).cxx_destruct;	// IMP=0x0000000000002956
@property(readonly, nonatomic) CDUnknownBlockType queryProvider; // @synthesize queryProvider=_queryProvider;
@property(readonly, nonatomic) long long queryID; // @synthesize queryID=_queryID;
@property(readonly, nonatomic) NSString *userAgent; // @synthesize userAgent=_userAgent;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000027fc
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000002760
- (id)initWithTitle:(id)arg1 clientIdentifier:(id)arg2 userAgent:(id)arg3 queryID:(long long)arg4 queryProvider:(CDUnknownBlockType)arg5;	// IMP=0x0000000000002674

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


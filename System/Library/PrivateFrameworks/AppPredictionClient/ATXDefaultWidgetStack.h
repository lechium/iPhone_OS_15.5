//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppPredictionClient/ATXDefaultHomeScreenItem-Protocol.h>
#import <AppPredictionClient/NSCopying-Protocol.h>
#import <AppPredictionClient/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface ATXDefaultWidgetStack : NSObject <NSSecureCoding, NSCopying, ATXDefaultHomeScreenItem>
{
    NSArray *_smallDefaultStack;	// 8 = 0x8
    NSArray *_mediumDefaultStack;	// 16 = 0x10
    NSArray *_largeDefaultStack;	// 24 = 0x18
    NSArray *_extraLargeDefaultStack;	// 32 = 0x20
    unsigned long long _suggestedSize;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001df4b
- (void).cxx_destruct;	// IMP=0x000000000001eb9c
@property(nonatomic) unsigned long long suggestedSize; // @synthesize suggestedSize=_suggestedSize;
@property(copy, nonatomic) NSArray *extraLargeDefaultStack; // @synthesize extraLargeDefaultStack=_extraLargeDefaultStack;
@property(copy, nonatomic) NSArray *largeDefaultStack; // @synthesize largeDefaultStack=_largeDefaultStack;
@property(copy, nonatomic) NSArray *mediumDefaultStack; // @synthesize mediumDefaultStack=_mediumDefaultStack;
@property(copy, nonatomic) NSArray *smallDefaultStack; // @synthesize smallDefaultStack=_smallDefaultStack;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001e981
@property(readonly) unsigned long long hash;
- (id)compactDescription;	// IMP=0x000000000001e74f
@property(readonly, copy) NSString *description;
- (id)dictionaryRepresentation;	// IMP=0x000000000001e57f
- (id)_JSONCompatible:(id)arg1 compact:(_Bool)arg2;	// IMP=0x000000000001e3bb
- (id)_JSONCompatible:(id)arg1;	// IMP=0x000000000001e3a7
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001e124
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001e077
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001df53

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end


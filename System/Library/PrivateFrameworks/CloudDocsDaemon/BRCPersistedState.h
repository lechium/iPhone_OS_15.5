//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CloudDocsDaemon/NSObject-Protocol.h>
#import <CloudDocsDaemon/NSSecureCoding-Protocol.h>

@class NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface BRCPersistedState : NSObject <NSObject, NSSecureCoding>
{
    NSObject<OS_dispatch_queue> *_assertionQueue;	// 8 = 0x8
}

+ (id)loadFromClientStateInSession:(id)arg1;	// IMP=0x000000000013da97
+ (id)loadFromClientStateInSession:(id)arg1 options:(id)arg2;	// IMP=0x000000000013da21
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000013da19
- (void).cxx_destruct;	// IMP=0x000000000013db24
@property(nonatomic) __weak NSObject<OS_dispatch_queue> *assertionQueue; // @synthesize assertionQueue=_assertionQueue;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000013daeb
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000013dad9
- (void)assertQueue;	// IMP=0x000000000013daab

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


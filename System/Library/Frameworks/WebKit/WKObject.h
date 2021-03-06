//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSProxy.h>

#import <WebKit/WKObject-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WKObject : NSProxy <WKObject>
{
    _Bool _hasInitializedTarget;	// 8 = 0x8
    struct RetainPtr<NSObject> _target;	// 16 = 0x10
}

- (id).cxx_construct;	// IMP=0x000000000016daae
- (void).cxx_destruct;	// IMP=0x000000000016da87
@property(readonly) struct Object *_apiObject;
- (_Bool)isNSValue__;	// IMP=0x000000000016d9ec
- (_Bool)isNSTimeZone__;	// IMP=0x000000000016d98a
- (_Bool)isNSString__;	// IMP=0x000000000016d928
- (_Bool)isNSSet__;	// IMP=0x000000000016d8c6
- (_Bool)isNSOrderedSet__;	// IMP=0x000000000016d864
- (_Bool)isNSNumber__;	// IMP=0x000000000016d802
- (_Bool)isNSDictionary__;	// IMP=0x000000000016d7a0
- (_Bool)isNSDate__;	// IMP=0x000000000016d73e
- (_Bool)isNSData__;	// IMP=0x000000000016d6dc
- (_Bool)isNSCFConstantString__;	// IMP=0x000000000016d67a
- (_Bool)isNSArray__;	// IMP=0x000000000016d618
- (_Bool)isNSObject__;	// IMP=0x000000000016d5b6
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x000000000016d545
- (void)forwardInvocation:(id)arg1;	// IMP=0x000000000016d4d4
- (id)_web_createTarget;	// IMP=0x000000000016d4cc
- (Class)classForKeyedArchiver;	// IMP=0x000000000016d46a
- (Class)classForCoder;	// IMP=0x000000000016d408
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x000000000016d2a5
- (_Bool)conformsToProtocol:(id)arg1;	// IMP=0x000000000016d208
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x000000000016d171
- (_Bool)isMemberOfClass:(Class)arg1;	// IMP=0x000000000016d100
- (_Bool)isKindOfClass:(Class)arg1;	// IMP=0x000000000016d094
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000016cf72
- (void)dealloc;	// IMP=0x000000000016ceee

// Remaining properties
@property(readonly) Class superclass;

@end


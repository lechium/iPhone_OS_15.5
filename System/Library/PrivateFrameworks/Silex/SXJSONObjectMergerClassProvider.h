//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Silex/SXJSONObjectMergerClassProviding-Protocol.h>

@class NSString;

@interface SXJSONObjectMergerClassProvider : NSObject <SXJSONObjectMergerClassProviding>
{
    Class _objectClass;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000722d5
@property(readonly, nonatomic) Class objectClass; // @synthesize objectClass=_objectClass;
- (Class)classForObject:(id)arg1 specVersion:(id)arg2;	// IMP=0x00000000000722b9
- (id)initWithObjectClass:(Class)arg1;	// IMP=0x0000000000072267

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


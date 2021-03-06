//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MetalTools/NSObject-Protocol.h>

@class NSString;

@interface MTLDebugResource : NSObject <NSObject>
{
    id _baseObject;	// 8 = 0x8
}

@property(readonly) id baseObject; // @synthesize baseObject=_baseObject;
- (_Bool)doesAliasAnyResources:(const id *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000009890d
- (_Bool)doesAliasAllResources:(const id *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000000098711
- (_Bool)doesAliasResource:(id)arg1;	// IMP=0x00000000000985f7
- (id)initWithBaseObject:(id)arg1;	// IMP=0x00000000000985ba

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


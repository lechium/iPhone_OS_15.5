//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class VMUProcessObjectGraph;

@interface VMUGroupBy : NSObject
{
    VMUProcessObjectGraph *_graph;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000075fc6
@property(readonly) VMUProcessObjectGraph *graph; // @synthesize graph=_graph;
- (void)enumerateGroups:(void *)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000075fac
- (id)typeNameForNode:(unsigned int)arg1;	// IMP=0x0000000000075dfd
- (id)initWithGraph:(id)arg1;	// IMP=0x0000000000075dbe

@end


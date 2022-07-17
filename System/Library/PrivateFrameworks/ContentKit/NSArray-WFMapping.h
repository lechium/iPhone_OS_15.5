//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSArray.h>

#import <ContentKit/WFJSONObject-Protocol.h>
#import <ContentKit/WFJavaScriptCoreBridgeableObject-Protocol.h>
#import <ContentKit/WFPropertyListObject-Protocol.h>

@class NSString;

@interface NSArray (WFMapping) <WFPropertyListObject, WFJavaScriptCoreBridgeableObject, WFJSONObject>
- (id)filteredObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000002d63f
- (id)mapAndFilterObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000002d62d
- (id)mapObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000002d61b
- (id)objectsNotMatchingClass:(Class)arg1;	// IMP=0x000000000003b44c
- (id)objectsMatchingClass:(Class)arg1;	// IMP=0x000000000003b43a
- (id)objectMatchingKey:(id)arg1 intValue:(int)arg2;	// IMP=0x000000000003b420
- (id)objectMatchingKey:(id)arg1 boolValue:(_Bool)arg2;	// IMP=0x000000000003b406
- (id)objectMatchingKey:(id)arg1 value:(id)arg2;	// IMP=0x000000000003b3eb
- (id)filteredArrayForKey:(id)arg1 intValue:(int)arg2;	// IMP=0x000000000003b3d1
- (id)filteredArrayForKey:(id)arg1 boolValue:(_Bool)arg2;	// IMP=0x000000000003b3b7
- (id)filteredArrayForKey:(id)arg1 value:(id)arg2;	// IMP=0x000000000003b39c
- (void)enumerateObjectsSequentiallyUsingAsynchronousBlock:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000053f76
- (void)enumerateObjectsUsingAsynchronousBlock:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000053f64
- (void)sortedArrayUsingContentSortDescriptors:(id)arg1 propertySubstitutor:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000f80f4
- (void)sortedArrayUsingContentSortDescriptors:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000f80dd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TouchML/TMLModelSerialize-Protocol.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet, NSSet, NSString, TMLMetaObject;

@interface TMLMetaContext : NSObject <TMLModelSerialize>
{
    NSMutableDictionary *_classes;	// 8 = 0x8
    NSMutableDictionary *_protocols;	// 16 = 0x10
    NSMutableDictionary *_objects;	// 24 = 0x18
    NSString *_rootObjectIdentifier;	// 32 = 0x20
    NSMutableDictionary *_functions;	// 40 = 0x28
    NSMutableArray *_exports;	// 48 = 0x30
    NSMutableArray *_categories;	// 56 = 0x38
    NSMutableSet *_requires;	// 64 = 0x40
}

+ (id)deserializeFromData:(id)arg1;	// IMP=0x00000000000650fd
+ (id)decode:(const struct ProtobufCMessage *)arg1;	// IMP=0x0000000000064e38
+ (id)convertObject:(id)arg1 toProtocol:(id)arg2;	// IMP=0x000000000006416b
+ (id)convertObject:(id)arg1 toClass:(id)arg2;	// IMP=0x0000000000063b80
- (void).cxx_destruct;	// IMP=0x00000000000651a9
@property(readonly, nonatomic) NSSet *requires; // @synthesize requires=_requires;
@property(readonly, nonatomic) NSArray *categories; // @synthesize categories=_categories;
@property(readonly, nonatomic) NSArray *exports; // @synthesize exports=_exports;
@property(readonly, nonatomic) NSDictionary *functions; // @synthesize functions=_functions;
@property(readonly, nonatomic) NSDictionary *protocols; // @synthesize protocols=_protocols;
@property(readonly, nonatomic) NSDictionary *classes; // @synthesize classes=_classes;
@property(readonly, nonatomic) NSDictionary *objects; // @synthesize objects=_objects;
- (id)serializedData;	// IMP=0x0000000000065091
- (void)encode:(struct ProtobufCMessage *)arg1;	// IMP=0x00000000000648fd
- (id)findParentForObjectWithIdentifier:(id)arg1;	// IMP=0x0000000000064656
- (void)addRequire:(id)arg1;	// IMP=0x00000000000645e7
- (void)addExports:(id)arg1;	// IMP=0x0000000000064578
- (void)addFunction:(id)arg1;	// IMP=0x000000000006450b
- (void)addProtocol:(id)arg1;	// IMP=0x000000000006449e
- (void)addClass:(id)arg1;	// IMP=0x0000000000064431
- (void)addObjectAsProtocol:(id)arg1;	// IMP=0x0000000000064360
- (void)addObjectAsClass:(id)arg1;	// IMP=0x0000000000063e55
- (void)removeCategories;	// IMP=0x0000000000063b66
- (void)removeFunctions;	// IMP=0x0000000000063b4c
- (void)removeClasses;	// IMP=0x0000000000063b32
- (void)commit;	// IMP=0x00000000000639cd
- (void)addObject:(id)arg1;	// IMP=0x0000000000063812
@property(readonly, nonatomic) TMLMetaObject *rootObject;
- (id)init;	// IMP=0x00000000000636cd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

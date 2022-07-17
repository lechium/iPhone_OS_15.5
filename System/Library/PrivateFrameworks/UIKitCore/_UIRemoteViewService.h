//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSUUID;

@interface _UIRemoteViewService : NSObject
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000115018a
- (void)endUsing:(CDUnknownBlockType)arg1;	// IMP=0x0000000001150535
- (void)beginUsing:(CDUnknownBlockType)arg1;	// IMP=0x00000000011504b8
- (id)init;	// IMP=0x000000000115048e
- (id)initWithExtension:(id)arg1 andContextToken:(id)arg2;	// IMP=0x0000000001150410
- (id)initWithPlugIn:(id)arg1 andContextToken:(id)arg2;	// IMP=0x00000000011502b0
- (id)_init;	// IMP=0x0000000001150281

// Remaining properties
@property(readonly, copy, nonatomic) NSUUID *contextToken; // @dynamic contextToken;
@property(readonly, nonatomic) NSString *identifier; // @dynamic identifier;
@property(readonly, nonatomic) NSUUID *multipleInstanceUUID; // @dynamic multipleInstanceUUID;
@property(readonly, nonatomic) _Bool multipleInstances; // @dynamic multipleInstances;
@property(readonly, nonatomic) _Bool overridesHostAppearance; // @dynamic overridesHostAppearance;
@property(readonly, nonatomic) int processIdentifier; // @dynamic processIdentifier;
@property(readonly, nonatomic) NSString *viewControllerClassName; // @dynamic viewControllerClassName;
@property(readonly, nonatomic) NSString *xpcServiceNameRoot; // @dynamic xpcServiceNameRoot;

@end

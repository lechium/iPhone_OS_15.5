//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSSecureCoding-Protocol.h>

@class NSArray, NSString, NSXPCListenerEndpoint, PBItemCollection, UIDraggingSystemTouchRoutingPolicy;

@interface UIDraggingSessionConfiguration : NSObject <NSSecureCoding>
{
    _Bool _supportsSystemDrag;	// 8 = 0x8
    _Bool _initiatedWithPointer;	// 9 = 0x9
    unsigned int _coordinateSpaceSourceContextID;	// 12 = 0xc
    NSArray *_touchIDs;	// 16 = 0x10
    unsigned long long _coordinateSpaceSourceLayerRenderID;	// 24 = 0x18
    UIDraggingSystemTouchRoutingPolicy *_routingPolicy;	// 32 = 0x20
    PBItemCollection *_itemCollection;	// 40 = 0x28
    NSXPCListenerEndpoint *_dataProviderEndpoint;	// 48 = 0x30
    NSXPCListenerEndpoint *_axEndpoint;	// 56 = 0x38
    NSString *_sceneIdentifier;	// 64 = 0x40
    struct CGPoint _initialCentroid;	// 72 = 0x48
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000fbbb21
- (void).cxx_destruct;	// IMP=0x0000000000fbc1e9
@property(nonatomic) _Bool initiatedWithPointer; // @synthesize initiatedWithPointer=_initiatedWithPointer;
@property(retain, nonatomic) NSString *sceneIdentifier; // @synthesize sceneIdentifier=_sceneIdentifier;
@property(nonatomic) _Bool supportsSystemDrag; // @synthesize supportsSystemDrag=_supportsSystemDrag;
@property(retain, nonatomic) NSXPCListenerEndpoint *axEndpoint; // @synthesize axEndpoint=_axEndpoint;
@property(retain, nonatomic) NSXPCListenerEndpoint *dataProviderEndpoint; // @synthesize dataProviderEndpoint=_dataProviderEndpoint;
@property(retain, nonatomic) PBItemCollection *itemCollection; // @synthesize itemCollection=_itemCollection;
@property(retain, nonatomic) UIDraggingSystemTouchRoutingPolicy *routingPolicy; // @synthesize routingPolicy=_routingPolicy;
@property(nonatomic) unsigned long long coordinateSpaceSourceLayerRenderID; // @synthesize coordinateSpaceSourceLayerRenderID=_coordinateSpaceSourceLayerRenderID;
@property(nonatomic) unsigned int coordinateSpaceSourceContextID; // @synthesize coordinateSpaceSourceContextID=_coordinateSpaceSourceContextID;
@property(nonatomic) struct CGPoint initialCentroid; // @synthesize initialCentroid=_initialCentroid;
@property(retain, nonatomic) NSArray *touchIDs; // @synthesize touchIDs=_touchIDs;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000fbbeaa
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000fbbb29

@end

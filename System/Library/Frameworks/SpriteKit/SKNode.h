//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIResponder.h>

#import <SpriteKit/NSCopying-Protocol.h>
#import <SpriteKit/NSSecureCoding-Protocol.h>
#import <SpriteKit/UIFocusItem-Protocol.h>

@class GKEntity, MISSING_TYPE, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, SKPhysicsBody, SKReachConstraints, SKScene, UIFocusEffect, UIView;
@protocol UIFocusEnvironment, UIFocusItemContainer;

@interface SKNode : UIResponder <NSCopying, NSSecureCoding, UIFocusItem>
{
    void *_skcNode;	// 8 = 0x8
    SKNode *_parent;	// 16 = 0x10
    NSMutableArray *_children;	// 24 = 0x18
    NSMutableArray *_actions;	// 32 = 0x20
    NSMutableDictionary *_keyedActions;	// 40 = 0x28
    NSMutableDictionary *_keyedSubSprites;	// 48 = 0x30
    NSMutableDictionary *_info;	// 56 = 0x38
    NSMutableDictionary *_attributeValues;	// 64 = 0x40
    NSString *_name;	// 72 = 0x48
    NSMutableDictionary *_userData;	// 80 = 0x50
    NSArray *_constraints;	// 88 = 0x58
    unsigned int _version;	// 96 = 0x60
    _Bool _userInteractionEnabled;	// 100 = 0x64
    _Bool _performFullCapture;	// 101 = 0x65
    SKReachConstraints *_reachConstraints;	// 104 = 0x68
    long long _focusBehavior;	// 112 = 0x70
    GKEntity *_entity;	// 120 = 0x78
}

+ (id)debugHierarchyValueForPropertyWithName:(id)arg1 onObject:(id)arg2 outOptions:(id *)arg3 outError:(id *)arg4;	// IMP=0x00000000000757bb
+ (id)debugHierarchyPropertyDescriptions;	// IMP=0x0000000000074bc8
+ (id)debugHierarchyObjectsInGroupWithID:(id)arg1 onObject:(id)arg2 outOptions:(id *)arg3;	// IMP=0x0000000000074aff
+ (id)debugHierarchyChildGroupingID;	// IMP=0x0000000000074af2
+ (id)nodeWithFileNamed:(id)arg1 securelyWithClasses:(id)arg2 andError:(id *)arg3;	// IMP=0x000000000006c09e
+ (id)nodeWithFileNamed:(id)arg1;	// IMP=0x000000000006bbf9
+ (id)node;	// IMP=0x000000000006bbdf
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000006b6aa
+ (id)nodeFromCaptureData:(id)arg1;	// IMP=0x0000000000075f64
- (void).cxx_destruct;	// IMP=0x0000000000075e8d
@property _Bool performFullCapture; // @synthesize performFullCapture=_performFullCapture;
@property(nonatomic) __weak GKEntity *entity; // @synthesize entity=_entity;
@property(retain, nonatomic) NSMutableDictionary *userData; // @synthesize userData=_userData;
@property(nonatomic) long long focusBehavior; // @synthesize focusBehavior=_focusBehavior;
@property(copy, nonatomic) SKReachConstraints *reachConstraints; // @synthesize reachConstraints=_reachConstraints;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (_Bool)_isEligibleForFocusInteraction;	// IMP=0x0000000000074ae0
- (_Bool)_isEligibleForFocus;	// IMP=0x0000000000074a38
- (_Bool)_isEffectivelyHidden;	// IMP=0x00000000000749a1
@property(readonly, nonatomic) __weak id <UIFocusEnvironment> parentFocusEnvironment;
@property(readonly, copy, nonatomic) NSArray *preferredFocusEnvironments;
- (_Bool)shouldUpdateFocusInContext:(id)arg1;	// IMP=0x0000000000074927
@property(readonly, nonatomic) _Bool canBecomeFocused;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x000000000007490c
- (void)updateFocusIfNeeded;	// IMP=0x00000000000748a6
- (void)setNeedsFocusUpdate;	// IMP=0x0000000000074834
@property(readonly, nonatomic) id <UIFocusItemContainer> focusItemContainer;
- (void)setValue:(id)arg1 forAttributeNamed:(id)arg2;	// IMP=0x0000000000074759
- (id)valueForAttributeNamed:(id)arg1;	// IMP=0x00000000000746b8
@property(copy, nonatomic) NSDictionary *attributeValues;
@property(readonly, nonatomic) CDStruct_14d5dc5e globalAccumulatedBoundingVerts;
@property(readonly, nonatomic) CDStruct_14d5dc5e globalBoundingVerts;
- (void)dealloc;	// IMP=0x000000000007442d
- (_Bool)hasUniformAlphaAndIsVisible;	// IMP=0x0000000000074425
- (_Bool)intersectsNode:(id)arg1;	// IMP=0x0000000000074410
- (struct CGSize)size;	// IMP=0x00000000000743d2
- (void)setSize:(struct CGSize)arg1;	// IMP=0x00000000000743cc
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toNode:(id)arg2;	// IMP=0x000000000007430c
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromNode:(id)arg2;	// IMP=0x000000000007424c
- (struct CGPoint)convertPointToParent:(struct CGPoint)arg1;	// IMP=0x00000000000741dc
- (struct CGPoint)convertPointFromParent:(struct CGPoint)arg1;	// IMP=0x000000000007416c
- (id)nodesAtPoint:(struct CGPoint)arg1;	// IMP=0x0000000000074091
- (id)nodeAtPoint:(struct CGPoint)arg1;	// IMP=0x0000000000074040
- (id)nodeAtPoint:(struct CGPoint)arg1 recursive:(_Bool)arg2;	// IMP=0x0000000000073ff2
- (_Bool)containsPoint:(struct CGPoint)arg1 withRadius:(double)arg2;	// IMP=0x0000000000073f36
- (_Bool)containsPoint:(struct CGPoint)arg1;	// IMP=0x0000000000073ee7
@property(nonatomic, getter=isUserInteractionEnabled) _Bool userInteractionEnabled;
@property(nonatomic, getter=isPaused) _Bool paused;
@property(nonatomic, getter=isHidden) _Bool hidden;
- (void)setScale:(double)arg1;	// IMP=0x00000000000739c7
@property(nonatomic) double yScale;
@property(nonatomic) double xScale;
@property(nonatomic) double yRotation;
@property(nonatomic) double xRotation;
@property(nonatomic) double zRotation;
@property(nonatomic) double zPosition;
- (struct CGRect)calculateAccumulatedFrame;	// IMP=0x00000000000736f2
@property(nonatomic) struct CGPoint position;
- (id)physicsField;	// IMP=0x00000000000736ad
@property(retain, nonatomic) SKPhysicsBody *physicsBody;
@property(readonly, copy) NSString *description;
- (_Bool)needsUpdate;	// IMP=0x0000000000073325
- (_Bool)hasActions;	// IMP=0x0000000000073301
- (id)containingView;	// IMP=0x000000000007323d
- (void)removeAllActions;	// IMP=0x000000000007306a
- (void)removeActionForKey:(id)arg1;	// IMP=0x0000000000072fad
- (id)actionForKey:(id)arg1;	// IMP=0x0000000000072eef
- (void)runAction:(id)arg1 withKey:(id)arg2;	// IMP=0x0000000000072de1
@property(nonatomic) double alpha;
@property(nonatomic) double speed;
- (void)runAction:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000072c89
- (void)_runAction:(id)arg1;	// IMP=0x0000000000072b71
- (void)runAction:(id)arg1;	// IMP=0x0000000000072aef
- (void)_descendantsWithPredicate:(CDUnknownBlockType)arg1 toMutableArray:(id)arg2;	// IMP=0x0000000000072903
- (id)_descendantsWithPredicate:(CDUnknownBlockType)arg1;	// IMP=0x0000000000072878
- (void)_descendantsToMutableArray:(id)arg1;	// IMP=0x00000000000726c6
- (id)_descendants;	// IMP=0x0000000000072660
@property(readonly, nonatomic) NSArray *children;
- (_Bool)hasChildren;	// IMP=0x00000000000725f4
- (void)_processSearchTokens:(vector_c6b866d0)arg1 visited:(void *)arg2 usingBlock:(CDUnknownBlockType)arg3 stopPointer:(_Bool *)arg4;	// IMP=0x00000000000717a4
- (void)_enumerateChildNodesWithName:(id)arg1 usingBlock:(CDUnknownBlockType)arg2 stopPointer:(_Bool *)arg3;	// IMP=0x0000000000070f0b
- (id)objectForKeyedSubscript:(id)arg1;	// IMP=0x0000000000070ca5
- (void)enumerateChildNodesWithName:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000070c82
- (id)childNodeWithName:(id)arg1;	// IMP=0x0000000000070b89
- (void)addChild:(id)arg1 withKey:(id)arg2;	// IMP=0x0000000000070a54
- (void)_flippedChangedFrom:(_Bool)arg1 to:(_Bool)arg2;	// IMP=0x0000000000070a4e
- (void)_scaleFactorChangedFrom:(float)arg1 to:(float)arg2;	// IMP=0x0000000000070a48
@property(copy, nonatomic) NSArray *constraints;
- (void)_performCleanup;	// IMP=0x0000000000070926
- (void)removeAllChildren;	// IMP=0x000000000007075e
- (void)removeChildrenInArray:(id)arg1;	// IMP=0x0000000000070253
- (void)removeChild:(id)arg1;	// IMP=0x0000000000070185
- (void)removeChildAtIndex:(long long)arg1;	// IMP=0x000000000006fec7
@property(readonly, nonatomic) struct CGRect frame;
- (void)insertChild:(id)arg1 atIndex:(long long)arg2;	// IMP=0x000000000006f7a5
- (void)addChild:(id)arg1;	// IMP=0x000000000006f740
- (_Bool)inParentHierarchy:(id)arg1;	// IMP=0x000000000006f65c
@property(readonly, nonatomic) const struct CGPath *outline;
@property(readonly, nonatomic) SKNode *parent;
@property(readonly, nonatomic) SKScene *scene;
- (void)_update:(double)arg1;	// IMP=0x000000000006f3a1
- (void)moveToParent:(id)arg1;	// IMP=0x000000000006f2d4
- (void)removeFromParent;	// IMP=0x000000000006f186
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000006e354
- (id)copy;	// IMP=0x000000000006e32d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000006dbd8
- (void)_initAccessibility;	// IMP=0x000000000006dbd2
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000006c91c
- (Class)swiftClassFromString:(id)arg1 moduleName:(id)arg2;	// IMP=0x000000000006c663
- (id)init;	// IMP=0x000000000006c533
- (void)_didMakeBackingNode;	// IMP=0x000000000006c52d
@property(readonly, nonatomic) void *_backingNode;
- (void *)_makeBackingNode;	// IMP=0x000000000006c4e5
- (_Bool)isEqualToNode:(id)arg1;	// IMP=0x000000000006b725
@property(readonly, nonatomic) shared_ptr_11a7378b _aether;
- (void)_removeChild:(id)arg1;	// IMP=0x000000000006b653
- (void)_removeAction:(id)arg1;	// IMP=0x000000000006b5fc
- (id)createDebugHierarchyVisualRepresentation;	// IMP=0x00000000000779fd
- (struct CGRect)_convertFrameToView:(id)arg1;	// IMP=0x00000000000779e2
- (id)_copyImageData;	// IMP=0x00000000000778ff
@property(readonly, nonatomic) NSArray *_allActions;
- (_Bool)_pathFromPhysicsBodyToPoints:(MISSING_TYPE ***)arg1 outSize:(unsigned long long *)arg2;	// IMP=0x000000000007777f
- (id)_subnodeFromIndexPath:(id)arg1;	// IMP=0x000000000007764b
- (id)allIntersectionsWithNode:(id)arg1 useAlphaTest:(_Bool)arg2;	// IMP=0x0000000000077191
- (_Bool)intersectsNode:(id)arg1 useAlphaTest:(_Bool)arg2;	// IMP=0x0000000000077117
@property(readonly, nonatomic) struct CGSize _size;
@property(nonatomic) struct CGPoint _anchorPoint;
@property(readonly, nonatomic) struct CGSize _untransformedSize;
@property(readonly, nonatomic) struct CGRect _untransformedBounds;
@property(nonatomic) _Bool _showBounds;
@property(retain, nonatomic) NSMutableDictionary *_info;
- (id)childrenInRect:(struct CGRect)arg1;	// IMP=0x0000000000076b33
- (void)updatePhysicsPositionAndScaleFromSprite;	// IMP=0x0000000000076b1a
- (void)_getBasePhysicsScale:(float *)arg1 yScale:(float *)arg2;	// IMP=0x0000000000076ae1
- (void)_getWorldTransform:(float *)arg1 positionY:(float *)arg2 rotation:(float *)arg3 xScale:(float *)arg4 yScale:(float *)arg5;	// IMP=0x0000000000076a43
- (void)_debugPrint:(int)arg1 mask:(unsigned long long)arg2;	// IMP=0x0000000000076806
- (void)_debugPrint:(int)arg1;	// IMP=0x00000000000765ec
- (void)debugPrint;	// IMP=0x00000000000765d6
- (id)archiveToFile:(id)arg1;	// IMP=0x0000000000076373
- (id)createFullCaptureData;	// IMP=0x00000000000761f9
- (void)setParent:(id)arg1;	// IMP=0x00000000000785f0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy, nonatomic) UIFocusEffect *focusEffect;
@property(readonly, copy, nonatomic) NSString *focusGroupIdentifier;
@property(readonly, nonatomic) long long focusGroupPriority;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isTransparentFocusItem;
@property(readonly, nonatomic) __weak UIView *preferredFocusedView;
@property(readonly) Class superclass;

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PKTextInputInteraction;
@protocol PKTextInputDebugStateIntrospectorDelegate;

@interface PKTextInputDebugStateIntrospector : NSObject
{
    PKTextInputInteraction *_interaction;	// 8 = 0x8
    id <PKTextInputDebugStateIntrospectorDelegate> _delegate;	// 16 = 0x10
}

+ (void)debugStateDidChange;	// IMP=0x00000000001d98ac
+ (id)debugStateLineDescriptionForIntrospectable:(id)arg1;	// IMP=0x00000000001d9524
+ (id)_knownInstances;	// IMP=0x00000000001d94bf
- (void).cxx_destruct;	// IMP=0x00000000001da1c6
@property(nonatomic) __weak id <PKTextInputDebugStateIntrospectorDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) __weak PKTextInputInteraction *interaction; // @synthesize interaction=_interaction;
- (id)_introspectableForStateKey:(id)arg1;	// IMP=0x00000000001d9e55
- (id)debugStateDescriptionForStateKey:(id)arg1;	// IMP=0x00000000001d9b4b
- (_Bool)debugStateCanShowDetailsForStateKey:(id)arg1;	// IMP=0x00000000001d9af1
- (id)debugStateDetailViewControllerForStateKey:(id)arg1;	// IMP=0x00000000001d9a8b
- (id)debugStateTitleForStateKey:(id)arg1;	// IMP=0x00000000001d9a75
- (id)debugStateKeys;	// IMP=0x00000000001d9a25
- (void)_debugStateDidChange;	// IMP=0x00000000001d99d9
- (id)fullDebugStateDescription;	// IMP=0x00000000001d9675
- (void)dealloc;	// IMP=0x00000000001d9449
- (id)initWithInteraction:(id)arg1;	// IMP=0x00000000001d939d

@end


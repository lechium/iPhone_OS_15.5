//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSBundle, NSDictionary, NSMutableDictionary, NSString, UIStoryboardSegueTemplate;

@interface UIStoryboard : NSObject
{
    NSBundle *bundle;	// 8 = 0x8
    NSString *storyboardFileName;	// 16 = 0x10
    NSDictionary *identifierToNibNameMap;	// 24 = 0x18
    NSDictionary *identifierToExternalStoryboardReferenceMap;	// 32 = 0x20
    NSString *designatedEntryPointIdentifier;	// 40 = 0x28
    NSString *designatedMenuIdentifier;	// 48 = 0x30
    NSMutableDictionary *identifierToUINibMap;	// 56 = 0x38
    UIStoryboardSegueTemplate *___currentStoryboardSegueTemplate;	// 64 = 0x40
    CDUnknownBlockType ___currentStoryboardSegueCreator;	// 72 = 0x48
    id ___currentSender;	// 80 = 0x50
}

+ (id)storyboardWithName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000000e805e2
@property(nonatomic) id __currentSender; // @synthesize __currentSender=___currentSender;
@property(nonatomic) CDUnknownBlockType __currentStoryboardSegueCreator; // @synthesize __currentStoryboardSegueCreator=___currentStoryboardSegueCreator;
@property(nonatomic) UIStoryboardSegueTemplate *__currentStoryboardSegueTemplate; // @synthesize __currentStoryboardSegueTemplate=___currentStoryboardSegueTemplate;
@property(readonly, nonatomic) NSMutableDictionary *identifierToUINibMap; // @synthesize identifierToUINibMap;
@property(readonly, nonatomic) NSString *designatedMenuIdentifier; // @synthesize designatedMenuIdentifier;
@property(readonly, nonatomic) NSString *designatedEntryPointIdentifier; // @synthesize designatedEntryPointIdentifier;
@property(readonly, nonatomic) NSDictionary *identifierToExternalStoryboardReferenceMap; // @synthesize identifierToExternalStoryboardReferenceMap;
@property(readonly, nonatomic) NSDictionary *identifierToNibNameMap; // @synthesize identifierToNibNameMap;
@property(readonly, nonatomic) NSString *storyboardFileName; // @synthesize storyboardFileName;
@property(readonly, nonatomic) NSBundle *bundle; // @synthesize bundle;
- (id)instantiateInitialViewController;	// IMP=0x0000000000e81225
- (id)instantiateInitialViewControllerWithCreator:(CDUnknownBlockType)arg1;	// IMP=0x0000000000e8120e
- (id)_instantiateInitialViewControllerWithCreator:(CDUnknownBlockType)arg1 storyboardSegueTemplate:(id)arg2 sender:(id)arg3;	// IMP=0x0000000000e81195
- (id)__reallyInstantiateViewControllerWithIdentifier:(id)arg1 creator:(CDUnknownBlockType)arg2 storyboardSegueTemplate:(id)arg3 sender:(id)arg4;	// IMP=0x0000000000e80f83
- (id)_instantiateViewControllerWithIdentifier:(id)arg1 creator:(CDUnknownBlockType)arg2 storyboardSegueTemplate:(id)arg3 sender:(id)arg4;	// IMP=0x0000000000e80ee4
- (id)instantiateViewControllerWithIdentifier:(id)arg1;	// IMP=0x0000000000e80e44
- (id)instantiateViewControllerWithIdentifier:(id)arg1 creator:(CDUnknownBlockType)arg2;	// IMP=0x0000000000e80e2c
- (id)_instantiateInitialMenu;	// IMP=0x0000000000e80d3c
- (id)_instantiateViewControllerReferencedByPlaceholderWithIdentifier:(id)arg1 storyboardSegueTemplate:(id)arg2 sender:(id)arg3;	// IMP=0x0000000000e80c2a
- (id)referencedStoryboardForExternalReferenceInfo:(id)arg1;	// IMP=0x0000000000e80b88
- (id)nibForViewControllerWithIdentifier:(id)arg1;	// IMP=0x0000000000e80a66
- (id)nibForStoryboardNibNamed:(id)arg1;	// IMP=0x0000000000e8096c
- (id)identifierForStringsFile;	// IMP=0x0000000000e8091b
- (_Bool)containsNibNamed:(id)arg1;	// IMP=0x0000000000e808c0
@property(readonly) NSString *name;
- (id)initWithBundle:(id)arg1 storyboardFileName:(id)arg2 identifierToNibNameMap:(id)arg3 identifierToExternalStoryboardReferenceMap:(id)arg4 designatedEntryPointIdentifier:(id)arg5 designatedMenuIdentifier:(id)arg6;	// IMP=0x0000000000e80403
- (void)dealloc;	// IMP=0x0000000000e80396

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/WFEnumerationParameter.h>

@class NSArray, WFAccountAccessResource;

@interface WFTodoistProjectPickerParameter : WFEnumerationParameter
{
    _Bool _hasLoadedProjects;	// 8 = 0x8
    NSArray *_possibleStates;	// 16 = 0x10
    WFAccountAccessResource *_accessResource;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000002ba701
@property(nonatomic) _Bool hasLoadedProjects; // @synthesize hasLoadedProjects=_hasLoadedProjects;
@property(nonatomic) __weak WFAccountAccessResource *accessResource; // @synthesize accessResource=_accessResource;
- (id)possibleStates;	// IMP=0x00000000002ba6b7
- (void)dealloc;	// IMP=0x00000000002ba635
- (id)projectNamed:(id)arg1;	// IMP=0x00000000002ba48d
- (void)setProjects:(id)arg1;	// IMP=0x00000000002ba3b3
- (id)projects;	// IMP=0x00000000002ba2b7
- (id)accessoryColorForPossibleState:(id)arg1;	// IMP=0x00000000002ba1f1
- (id)localizedLabelForPossibleState:(id)arg1;	// IMP=0x00000000002ba1dc
- (void)loadProjectsFromCache;	// IMP=0x00000000002ba120
- (void)fetchProjectsIfNeeded;	// IMP=0x00000000002b9f83
- (void)wasAddedToWorkflow;	// IMP=0x00000000002b9f2d

@end

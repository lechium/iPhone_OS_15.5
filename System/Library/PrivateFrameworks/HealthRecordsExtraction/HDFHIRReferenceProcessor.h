//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface HDFHIRReferenceProcessor : NSObject
{
}

+ (id)identifierFromAbsoluteReferenceURL:(id)arg1;	// IMP=0x0000000000030278
+ (id)identifierForResource:(id)arg1 containedInResource:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000301d3
+ (_Bool)referenceIsAbsolute:(id)arg1;	// IMP=0x00000000000301b7
+ (_Bool)referenceRequiresContaining:(id)arg1;	// IMP=0x000000000003019b
+ (_Bool)reference:(id)arg1 matchesIdentifier:(id)arg2;	// IMP=0x000000000002fefe
+ (id)resourceReferenceInReference:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002fee2
+ (id)referencesAtKeyPath:(id)arg1 resourceDictionary:(id)arg2 error:(id *)arg3;	// IMP=0x000000000002fbd8
+ (id)resourceContainedInResource:(id)arg1 reference:(id)arg2 error:(id *)arg3;	// IMP=0x000000000002f899
+ (id)resourcesContainedInResource:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002f7cc
+ (id)newResourceFromResource:(id)arg1 containingOnlyResources:(id)arg2 error:(id *)arg3;	// IMP=0x000000000002f61b
+ (id)newResourceFromResource:(id)arg1 containingResource:(id)arg2 reference:(id)arg3 error:(id *)arg4;	// IMP=0x000000000002ebfa

@end

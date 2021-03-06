//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface EKFrozenReminderStructuredLocation
{
}

+ (id)uniqueIdentifierForREMObject:(id)arg1;	// IMP=0x0000000000036104
+ (_Bool)canCommitSelf;	// IMP=0x00000000000360fc
+ (Class)meltedClass;	// IMP=0x0000000000035d6e
- (void)setLatitudeAndLongitudeFromAlternateUniverseObject:(id)arg1 inChangeSet:(id)arg2;	// IMP=0x0000000000036593
- (double)radius;	// IMP=0x000000000003649a
- (int)referenceFrame;	// IMP=0x0000000000036492
- (double)longitude;	// IMP=0x0000000000036399
- (double)latitude;	// IMP=0x00000000000362a0
- (id)address;	// IMP=0x00000000000361ea
- (id)mapKitHandle;	// IMP=0x0000000000036134
- (id)updateParentToCommitSelf:(id)arg1;	// IMP=0x0000000000036119
- (id)title;	// IMP=0x0000000000036046
- (id)uuid;	// IMP=0x0000000000036034
- (id)updatedStructuredLocation;	// IMP=0x0000000000035e55
- (id)_structuredLocation;	// IMP=0x0000000000035e3d
- (id)remObjectID;	// IMP=0x0000000000035e35
@property(readonly) NSString *uniqueIdentifier;
- (id)initWithAlternateUniverseObject:(id)arg1 inEventStore:(id)arg2 withUpdatedChildObjects:(id)arg3;	// IMP=0x0000000000035b6c

@end


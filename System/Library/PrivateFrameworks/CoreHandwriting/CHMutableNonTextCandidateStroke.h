//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary;

@interface CHMutableNonTextCandidateStroke
{
}

- (id)description;	// IMP=0x0000000000076bb0
- (_Bool)_adjustSupportForContainerClassificationByAddingStroke:(id)arg1 consistingOfSubstrokes:(id)arg2;	// IMP=0x0000000000076450
- (_Bool)_adjustSupportForLineClassificationByAddingStroke:(id)arg1 consistingOfSubstrokes:(id)arg2;	// IMP=0x0000000000075a20
- (_Bool)adjustSupportByAddingStroke:(id)arg1 consistingOfSubstrokes:(id)arg2;	// IMP=0x0000000000075860
- (_Bool)adjustSupportByRemovingStrokeIdentifier:(id)arg1;	// IMP=0x0000000000075840
- (_Bool)_removeSupportForStrokeIdentifier:(id)arg1;	// IMP=0x0000000000075780
- (void)_setSupportForStrokeIdentifier:(id)arg1 support:(double)arg2;	// IMP=0x00000000000756b0
@property(retain, nonatomic) NSDictionary *supportByStrokeIdentifier; // @dynamic supportByStrokeIdentifier;

@end

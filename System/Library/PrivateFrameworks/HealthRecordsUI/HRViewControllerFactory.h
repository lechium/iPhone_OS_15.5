//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface HRViewControllerFactory : NSObject
{
}

+ (id)shared;	// IMP=0x00000000001bb260
- (void).cxx_destruct;	// IMP=0x00000000001bc660
- (id)init;	// IMP=0x00000000001bc600
- (id)makeDetailViewControllerForRecord:(id)arg1 usingProfile:(id)arg2;	// IMP=0x00000000001bc590
- (id)makeViewControllerForRecord:(id)arg1 usingProfile:(id)arg2;	// IMP=0x00000000001bc530
- (id)makeSettingsViewControllerUsing:(id)arg1;	// IMP=0x00000000001bb750
- (id)makeOnboadingTileViewControllerUsing:(id)arg1;	// IMP=0x00000000001bb630
- (id)makeAccountDetailViewControllerForAccount:(id)arg1 profile:(id)arg2;	// IMP=0x00000000001bb500

@end


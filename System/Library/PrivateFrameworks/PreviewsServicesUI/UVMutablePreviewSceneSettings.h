//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIMutableApplicationSceneSettings.h>

@interface UVMutablePreviewSceneSettings : UIMutableApplicationSceneSettings
{
}

- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;	// IMP=0x0000000000005214
- (id)keyDescriptionForSetting:(unsigned long long)arg1;	// IMP=0x00000000000051ac
- (id)makeCopy;	// IMP=0x0000000000005192
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000005164
@property(nonatomic) long long previewSceneLayout;
@property(nonatomic) struct CGSize previewMaximumSize;

@end

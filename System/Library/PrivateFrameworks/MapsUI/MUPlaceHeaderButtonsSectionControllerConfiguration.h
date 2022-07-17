//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOHeaderButtonModuleConfiguration, MKETAProvider;
@protocol MUHeaderButtonMenuActionProvider;

__attribute__((visibility("hidden")))
@interface MUPlaceHeaderButtonsSectionControllerConfiguration : NSObject
{
    _Bool _showMoreButton;	// 8 = 0x8
    MKETAProvider *_etaProvider;	// 16 = 0x10
    GEOHeaderButtonModuleConfiguration *_buttonModuleConfiguration;	// 24 = 0x18
    id <MUHeaderButtonMenuActionProvider> _menuProvider;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000083e05
@property(nonatomic) __weak id <MUHeaderButtonMenuActionProvider> menuProvider; // @synthesize menuProvider=_menuProvider;
@property(retain, nonatomic) GEOHeaderButtonModuleConfiguration *buttonModuleConfiguration; // @synthesize buttonModuleConfiguration=_buttonModuleConfiguration;
@property(nonatomic) _Bool showMoreButton; // @synthesize showMoreButton=_showMoreButton;
@property(nonatomic) __weak MKETAProvider *etaProvider; // @synthesize etaProvider=_etaProvider;

@end

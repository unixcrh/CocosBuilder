//
//  PlugInNode.h
//  CocosBuilder
//
//  Created by Viktor Lidholt on 2/8/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PlugInNode : NSObject
{
    NSBundle* bundle;
    
    NSString* nodeClassName;
    NSString* nodeEditorClassName;
    
    NSString* dropTargetSpriteFrameClass;
    NSString* dropTargetSpriteFrameProperty;
    
    NSMutableArray* nodeProperties;
}

@property (nonatomic,readonly) NSString* nodeClassName;
@property (nonatomic,readonly) NSString* nodeEditorClassName;
@property (nonatomic,readonly) NSMutableArray* nodeProperties;
@property (nonatomic,readonly) NSString* dropTargetSpriteFrameClass;
@property (nonatomic,readonly) NSString* dropTargetSpriteFrameProperty;
@property (nonatomic,readonly) BOOL acceptsDroppedSpriteFrameChildren;

- (id) initWithBundle:(NSBundle*) b;

@end
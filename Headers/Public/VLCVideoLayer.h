/*****************************************************************************
 * VLCVideoLayer.h: VLCKit.framework VLCVideoLayer header
 *****************************************************************************
 * Copyright (C) 2007 Pierre d'Herbemont
 * Copyright (C) 2007 VLC authors and VideoLAN
 * $Id$
 *
 * Authors: Pierre d'Herbemont <pdherbemont # videolan.org>
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation; either version 2.1 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston MA 02110-1301, USA.
 *****************************************************************************/

#import <QuartzCore/QuartzCore.h>

NS_ASSUME_NONNULL_BEGIN

/**
 * a custom layer for rendering video in a CoreAnimation environment
 */
OBJC_VISIBLE
@interface VLCVideoLayer : CALayer

/**
 * Is a video being rendered in this layer?
 * \return the BOOL value
 */
@property (nonatomic, readonly) BOOL hasVideo;
/**
 * Should the video fill the screen by adding letterboxing or stretching?
 * \return the BOOL value
 */
@property (nonatomic) BOOL fillScreen;

@end

NS_ASSUME_NONNULL_END
